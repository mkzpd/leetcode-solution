#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef int bool;
#define false 0
#define true 1

bool isValid(char *s) {
    char *flag = (char *)malloc(strlen(s)+1);
    int pos = 1;
    while(*s) {
        switch (*s) {
            case '(':
            case '{':
            case '[':
                flag[pos++] = *s;
                break;
            case ')':
                if (flag[pos-1] == '(')
                    --pos;
                else
                    return false;
                break;
            case '}':
                if (flag[pos-1] == '{')
                    --pos;
                else
                    return false;
                break;
            case ']':
                if (flag[pos-1] == '[')
                    --pos;
                else
                    return false;
                break;
        }
        ++s;
    }
    return pos == 1;
}

int main()
{
    //char s[] = {'(',')'};                     // true
    //char s[] = {'(','[',')',']'};             // false 
    //char s[] = {'(',')','[',']','{','}'};     // true 
    char s[] = {'{','[',']','}'};               // true
    int res = isValid(s);
    if(1 == res){
        printf("true\n");
    }else{
        printf("false\n");
    }
    return 0;
}

