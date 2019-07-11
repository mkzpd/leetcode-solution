#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestPalindrome(char* s) {
    if(!s[0])
        return s;
    int length = strlen(s);
    int max_length = 1;
    int max_i = 0;
    int k = 0;
    
    while(k<length)
    {
        int i=k; 
        int j=k;
        while(j<length-1 && s[j] == s[j+1]) j++;
        k = j+1;
        while(j<length-1 && i>0 && s[i-1] == s[j+1])
        {
            j++;
            i--;
        }
        if(j-i+1 >= max_length)
        {
            max_length = j-i+1;
            max_i = i;
        }
    }
    
    char* p = (char *)malloc((max_length+1)*sizeof(char));
    memcpy(p, &s[max_i], max_length);
    p[max_length] = '\0';
    return p;
}

int main(int argc, char *argv[])
{
    if(argc != 2){
        fprintf(stderr,"Usage: ./test string\n");
        exit(1);
    }
    char *res = longestPalindrome(argv[1]);
    printf("%s\n",res);
    free(res);
    return 0;
}

