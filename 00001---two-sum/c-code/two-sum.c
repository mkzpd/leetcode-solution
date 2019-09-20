/*
 * @lc app=leetcode id=1 lang=c
 *
 * [1] Two Sum
 *
 * https://leetcode.com/problems/two-sum/description/
 *
 * algorithms
 * Easy (44.20%)
 * Total Accepted:    1.8M
 * Total Submissions: 4.1M
 * Testcase Example:  '[2,7,11,15]\n9'
 *
 * Given an array of integers, return indices of the two numbers such that they
 * add up to a specific target.
 * 
 * You may assume that each input would have exactly one solution, and you may
 * not use the same element twice.
 * 
 * Example:
 * 
 * 
 * Given nums = [2, 7, 11, 15], target = 9,
 * 
 * Because nums[0] + nums[1] = 2 + 7 = 9,
 * return [0, 1].
 * 
 * 
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 50000

int hash(int key) {
    int r = key % SIZE;
    return r < 0 ? r + SIZE : r;
}

void insert(int *keys, int *values, int key, int value) {
    int index = hash(key);
    while (values[index]) {
        index++;
        index %= SIZE;
    }
    keys[index] = key;
    values[index] = value;
}

int search(int *keys, int *values, int key) {
    int index = hash(key);
    while (values[index]) {
        if (keys[index] == key) {
            return values[index];
        }
        index++;
        index %= SIZE;
    }
    return 0;
}

int* twoSum(int* nums, int numsSize, int target,int *returnSize) {
    int keys[SIZE];
    *returnSize = 2;
    int values[SIZE] = {0};
    for (int i = 0; i < numsSize; i++) {
        int complements = target - nums[i];
        int value = search(keys, values, complements);
        if (value) {
            int *indices = (int *) malloc(sizeof(int) * (*returnSize));
            indices[0] = value - 1;
            indices[1] = i;
            return indices;
        }
        insert(keys, values, nums[i], i + 1);
    }
    return NULL;
}
int main(void)
{
    int array[] = {2,7,11,15};
    int target = 9;

    //int array[] = {89,22,7,11,45,15};
    //int target = 56;
    
    int numsSize = sizeof(array) / sizeof(array[0]);
    int returnSize = 0;
    int *result = NULL;
    result = twoSum(array,numsSize,target,&returnSize);
    if(result == NULL)
        printf("No fonud!\n");
    else
        printf("[%d,%d]\n",result[0],result[1]);
    return 0;
}

/*
    output:

    [0,1]
*/

