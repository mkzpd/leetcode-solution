#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int compare(const void *a, const void *b)
{
    return *(int *) a - *(int *) b;
}

void dfs(int *nums, int size, int start, int target, int *solution, int len,
                bool *used, int **results, int *column_sizes, int *count)
{
    int i;
    if (target == 0) {
        results[*count] = malloc(len * sizeof(int));
        memcpy(results[*count], solution, len * sizeof(int));
        column_sizes[*count] = len;
        (*count)++;
    } else if (target > 0) {
        for (i = start; i < size; i++) {
            if (!used[i]) {
                if (i > 0 && !used[i - 1] && nums[i - 1] == nums[i]) continue;
                used[i] = 1;
                solution[len] = nums[i];
                dfs(nums, size, i + 1, target - nums[i], solution, len + 1, used, results, column_sizes, count);
                used[i] = 0;
            }
        }
    }
}
int** combinationSum2(int* candidates, int candidatesSize, int target, int* returnSize, int** returnColumnSizes)
{
    qsort(candidates, candidatesSize, sizeof(int), compare);

    int *solution = malloc(target * sizeof(int));
    int **results = malloc(100 * sizeof(int *));
    bool *used = malloc(candidatesSize);
    memset(used, 0, candidatesSize);
    *returnColumnSizes = malloc(100 * sizeof(int));
    *returnSize = 0;
    dfs(candidates, candidatesSize, 0, target, solution, 0, used, results, *returnColumnSizes, returnSize);
    return results;
}

int main()
{
    //int candidates[] = {10,1,2,7,6,1,5};
    //int target = 8;

    int candidates[] = {2,5,2,1,2};
    int target = 5;

    int candidatesSize = sizeof(candidates) / sizeof(candidates[0]);
    int returnSize = 0;
    int *returnColumnSizes = NULL;
    int i;
    int m;
    int **result = combinationSum2(candidates, candidatesSize, target, &returnSize, &returnColumnSizes);

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
    for(i = 0; i < returnSize ; i++){
        free(result[i]);
    }
    free(result);
    printf("\n");
    return 0;
}

