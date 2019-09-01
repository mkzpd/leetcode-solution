/*
 * @lc app=leetcode id=40 lang=c
 *
 * [40] Combination Sum II
 *
 * https://leetcode.com/problems/combination-sum-ii/description/
 *
 * algorithms
 * Medium (41.75%)
 * Total Accepted:    223.1K
 * Total Submissions: 534.3K
 * Testcase Example:  '[10,1,2,7,6,1,5]\n8'
 *
 * Given a collection of candidate numbers (candidates) and a target number
 * (target), find all unique combinations in candidates where the candidate
 * numbers sums to target.
 * 
 * Each number in candidates may only be used once in the combination.
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
 * Input: candidates = [10,1,2,7,6,1,5], target = 8,
 * A solution set is:
 * [
 * ⁠ [1, 7],
 * ⁠ [1, 2, 5],
 * ⁠ [2, 6],
 * ⁠ [1, 1, 6]
 * ]
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: candidates = [2,5,2,1,2], target = 5,
 * A solution set is:
 * [
 * [1,2,2],
 * [5]
 * ]
 * 
 * 
 */


/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */



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

