#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char map[10][4] = {
    {' ', ' ', ' ', ' '}, //0
    {' ', ' ', ' ', ' '}, //1
    {'a', 'b', 'c', ' '}, //2
    {'d', 'e', 'f', ' '}, //3
    {'g', 'h', 'i', ' '}, //4
    {'j', 'k', 'l', ' '}, //5
    {'m', 'n', 'o', ' '}, //6
    {'p', 'q', 'r', 's'}, //7
    {'t', 'u', 'v', ' '}, //8
    {'w', 'x', 'y', 'z'}  //9
};

void letterComb(char* digits, int* returnSize, char *result, int ind, char **ans)
{
    int i = 0;
    char c;
    char *letter = map[*digits - '0'];

    if (*digits == 0) {
        char *res = (char *)malloc(strlen(result) + 1);
        strcpy(res, result);
        ans[(*returnSize)] = res;
        (*returnSize)++;
        return;
    }

    while ((c = letter[i]) != ' ') {
        result[ind] = c;
        letterComb(digits + 1, returnSize, result, ind + 1, ans);
        i++;
        if (i == 4)
            break;
    }
    return;
}

char** letterCombinations(char* digits, int* returnSize) {
    
    int ind = 0, size = 0;
    int len = strlen(digits) + 1;
    char result[len];
    
    if (digits == NULL || strlen(digits) == 0){
        *returnSize = size;
        return NULL;
    }
  
    char **ans = (char **) malloc(sizeof (char *) * 32768);
        
    memset(result, 0, len);
    
    letterComb(digits, &size, result, ind, ans);
    *returnSize = size;
    
    return ans;
}

int main(int argc, char *argv[])
{
    if(argc != 2){
        fprintf(stderr, "Usage: ./test number\n");
        exit(1);
    }
    int j, returnSize = 0, i = 0;
    char **res = letterCombinations(argv[1], &returnSize);

    // print result
    while(*(res+i) != NULL){
        printf("%s ",res[i]);
        i++;
    }
    printf("\n%d\n",returnSize);

    // free res
    for(j = 0; j < returnSize; j++){
        free(res[j]);
    }
    free(res);
    return 0;
}
