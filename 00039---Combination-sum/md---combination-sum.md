```
/*
 * @lc app=leetcode id=39 lang=c
 *
 * [39] Combination Sum
 *
 * https://leetcode.com/problems/combination-sum/description/
 *
 * algorithms
 * Medium (48.71%)
 * Total Accepted:    346.6K
 * Total Submissions: 711.5K
 * Testcase Example:  '[2,3,6,7]\n7'
 *
 * Given a set of candidate numbers (candidates) (without duplicates) and a
 * target number (target), find all unique combinations in candidates where the
 * candidate numbers sums to target.
 * 
 * The same repeated number may be chosen from candidates unlimited number of
 * times.
 * 
 * Note:
 * 
 * 
 * All numbers (including target) will be positive integers.
 * The solution set must not contain duplicate combinations.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: candidates = [2,3,6,7], target = 7,
 * A solution set is:
 * [
 * ⁠ [7],
 * ⁠ [2,2,3]
 * ]
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: candidates = [2,3,5], target = 8,
 * A solution set is:
 * [
 * [2,2,2,2],
 * [2,3,3],
 * [3,5]
 * ]
 * 
 * 
 */


/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void subSUm(int* candidates, int candidatesSize, int target, int** returnColumnSizes, int* returnSize, int index, int **sumArr, int curpos, int * sumbuff){

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

    return sumArr;
}
```
