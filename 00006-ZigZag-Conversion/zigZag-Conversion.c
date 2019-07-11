#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* convert(char* s, int numRows) {
    int n=strlen(s);
    char *a = (char *)malloc((n+1) * sizeof(char));
    int k=0;
    if(numRows==1 || n<=numRows)
        return s;
    for(int i=0;i<numRows;i++)
    {
        for(int j=i;j<n;j+=2*(numRows-1))
        {
            a[k++]=s[j];
            if(i!=0 && i!=numRows-1)
            {
              int t=j+2*(numRows-1)-2*i;
              if(t<n)
              a[k++]=s[t];
            }
        }
    }
    a[k]='\0';
    return a;
}

int main(int argc, char *argv[])
{
    if(argc != 3){
        fprintf(stderr, "Usage: ./test string num\n");
        exit(1);
    }
    char *res = convert(argv[1],atoi(argv[2]));
    printf("%s\n",res);
    return 0;
}

