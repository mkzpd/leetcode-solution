#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* change(char *ret){
    char *ret_temp=(char*)malloc(sizeof(char)*5000);
    int count=1;
    char flag=ret[0];
    int j=0;
    for(int i=1;i < (int)strlen(ret);i++){
        if(flag==ret[i]){count++;}
        else{
            j += sprintf(ret_temp + j,"%d%c", count,flag);
            flag=ret[i];
            count=1;
        }
    }
    sprintf(ret_temp + j, "%d%c", count,flag);
    free(ret);
    return ret_temp;
}
char* countAndSay(int n) {
    char *ret=(char*)malloc(sizeof(char)*5000);
    ret[0]='1';
    ret[1]='\0';
    for(int i=1;i<n;i++){ret=change(ret);}
    return ret;
}

int main(int argc, char *argv[])
{
    if(argc != 2){
        fprintf(stderr, "Uasge: ./test number\n");
        exit(1);
    }
    char *res = countAndSay(atoi(argv[1]));
    printf("%s\n",res);
    free(res);
    return 0;
}

