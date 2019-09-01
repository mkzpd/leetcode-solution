#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
void subSUm(int* candidates, int candidatesSize, int target, int** returnColumnSizes, int* returnSize, int index, int **sumArr, 
            int curpos, int * sumbuff){

    if(target < 0){
         return;
    }
    else if(0 == target){
        sumArr[*returnSize] = (int *)malloc(curpos*sizeof(int));
        memcpy(sumArr[*returnSize], sumbuff, curpos*sizeof(int));
        (*returnColumnSizes)[*returnSize] = curpos;
        (*returnSize) = (*returnSize) + 1;
        return;
    }
    for(int i = index; i < candidatesSize; i++){
        int subtarget = target - candidates[i];
        sumbuff[curpos] = candidates[i];
        subSUm(candidates, candidatesSize, subtarget, returnColumnSizes, returnSize, i, sumArr, curpos+1, sumbuff);
    }

}

int** combinationSum(int* candidates, int candidatesSize, int target, int* returnSize, int** returnColumnSizes){

    int **sumArr = (int **)malloc(512*sizeof(int *));
    int *sumbuff = (int *)malloc(512*sizeof(int));
    *returnColumnSizes = (int *)malloc(512*sizeof(int));

    *returnSize = 0;
    subSUm(candidates, candidatesSize, target, returnColumnSizes, returnSize, 0, sumArr, 0, sumbuff);
    
    free(sumbuff);

    return sumArr;
}

int main()
{
    int candidates[] = {2,3,5};
    int target = 8;

    //int candidates[] = {2,3,6,7};
    //int target = 7;

    int candidatesSize = sizeof(candidates) / sizeof(candidates[0]);
    int returnSize = 0;
    int *returnColumnSizes = NULL;
    int i;
    int m;
    int **result = combinationSum(candidates, candidatesSize, target, &returnSize, &returnColumnSizes);

    printf("\n");

    for(i = 0; i < returnSize; i++){
        int k = *(returnColumnSizes+i);
        for(m = 0; m < k; m++){
            printf("%d " ,*(*(result+i) + m));
        }
        printf("\n");
        
    }
    free(returnColumnSizes);
    returnColumnSizes = NULL;
    for(i = 0; i < 512; i++){
        free(result[i]);
    }
    free(result);
    printf("\n");
    return 0;
}
