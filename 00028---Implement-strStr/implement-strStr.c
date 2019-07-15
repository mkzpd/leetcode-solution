#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strStr(char *haystack, char *needle)
{
    int hlen = strlen(haystack), nlen = strlen(needle);
    // in case if needle is empty, return 0 regardless of haystack
    if (!nlen)
    {
        return 0;
    }
    // else if haystack is empty or the length of haystack is shorter than needle, return -1
    if (!hlen || hlen < nlen)
    {
        return -1;
    }

    // iterate over haystack, compare substring starting at each character of it
    // NOTE: here hlen - nlen can save us a lot of times
    for (int i = 0; i <= hlen - nlen; i++)
    {
        int m = i; // next character in haystack to compare with needle
        int n = 0; // next character in needle to compare with haystack
        while (m < hlen && n < nlen && haystack[m] == needle[n])
        {
            m++;
            n++;
        }
        // check if every character of needle has been matched
        if (!needle[n])
        {
            return i;
        }
    }
    return -1; // not found
}

int main(int argc, char *argv[])
{
    if(argc != 3){
        fprintf(stderr, "Usage: ./test string1 string2\n");
        exit(1);
    }
    int res = strStr(argv[1], argv[2]);
    printf("%d\n",res);
    return 0;
}

