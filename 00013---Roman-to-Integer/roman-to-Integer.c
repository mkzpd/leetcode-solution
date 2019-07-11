#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getVal(char c)
{
    switch(c){
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
    }
}

int romanToInt(char* s) {
    int len = strlen(s);
    int sum=0;
    for(int i=0;i<len;i++){
        if(i+1<len && getVal(s[i])<getVal(s[i+1])){
            sum += getVal(s[i+1]) - getVal(s[i]);
            i++;
        }else
            sum += getVal(s[i]);
    }
    return sum;
}

int main(int argc, char *argv[])
{
    if(argc != 2){
        fprintf(stderr, "Usage: ./test string\n");
        exit(1);
    }
    int res =romanToInt(argv[1]);
    printf("%d\n", res);
    return 0;
}

