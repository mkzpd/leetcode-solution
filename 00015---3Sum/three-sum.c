/*
 * @lc app=leetcode id=15 lang=c
 *
 * [15] 3Sum
 *
 * https://leetcode.com/problems/3sum/description/
 *
 * algorithms
 * Medium (24.06%)
 * Total Accepted:    558.3K
 * Total Submissions: 2.3M
 * Testcase Example:  '[-1,0,1,2,-1,-4]'
 *
 * Given an array nums of n integers, are there elements a, b, c in nums such
 * that a + b + c = 0? Find all unique triplets in the array which gives the
 * sum of zero.
 * 
 * Note:
 * 
 * The solution set must not contain duplicate triplets.
 * 
 * Example:
 * 
 * 
 * Given array nums = [-1, 0, 1, 2, -1, -4],
 * 
 * A solution set is:
 * [
 * ⁠ [-1, 0, 1],
 * ⁠ [-1, -1, 2]
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


struct Triplet {
    int             a;
    int             b;
    int             c;
    struct Triplet  *next;
};

void push(struct Triplet **headRef, struct Triplet **tailRef, int *array, int i, int start, int end) {
    struct Triplet *node = (struct Triplet *) malloc(sizeof(struct Triplet));
    node->next = NULL;
    node->a = array[i];
    node->b = array[start];
    node->c = array[end];

    if (*headRef == NULL) {
        *headRef = node;
        *tailRef = node;
    } else {
        (*tailRef)->next = node;
        *tailRef = node;
    }
}

void list2array(struct Triplet *head, int **array, int *col) {
    struct Triplet *current = head;
    struct Triplet *tmp = NULL;
    int index = 0;

    while (current != NULL) {
        tmp = current->next;
        array[index] = (int *) malloc(sizeof(int) * 3);
        array[index][0] = current->a;
        array[index][1] = current->b;
        array[index][2] = current->c;

        col[index] = 3;

        free(current);
        current = tmp;
        index++;
    }

}

int compare(const void *a, const void *b) {
    int num = *(int *)a;
    int num1 = *(int *)b;

    return num - num1;
}

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    int start;
    int end;
    int sum;
    int count = 0;
    struct Triplet *head = NULL;
    struct Triplet *tail = NULL;
    int **array = NULL;

    *returnSize = 0;

    if (nums == NULL || numsSize == 0) {
        returnColumnSizes[0] = NULL;
        return NULL;
    }

    qsort(nums, numsSize, sizeof(int), compare);

    for (int i = 0; i < numsSize; i++) {
        start = i + 1;
        end = numsSize - 1;
        sum = 0;

        /* handle duplicates */
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }
        //printf("considering index %d.\n", i);

        while (start < end) {
            sum = nums[i] + nums[start] + nums[end];

            if (sum == 0) {
                count++;
                push(&head, &tail, nums, i, start, end);

                while (start < end && nums[start] == nums[start + 1]) {
                    start++;
                }
                while (start < end && nums[end] == nums[end - 1]) {
                    end--;
                }

                start++;
                end--;
            } else if (sum > 0) {
                end --;
            } else {
                start++;
            }
        }
    }

    if (count) {
        returnColumnSizes[0] = (int *) malloc(sizeof(int) * count);
        array = (int **) malloc(sizeof(int *) * count);
        list2array(head, array, returnColumnSizes[0]);
    }

    *returnSize = count;

    return array;
}

int main()
{
    int S[] = {-2,1,-5,-4,-4,4,-2,0,4,0,-2,3,1,8,-5,0};
    int size = sizeof(S) / sizeof(int);
    int returnSize = 0;
    int *returnColumnSizes = NULL;
    int **list = threeSum(S, size, &returnSize,&returnColumnSizes);
    if (list == NULL)
        return 0;
    int tmp = 0;
    for(tmp = 0; tmp < returnSize; tmp++)
    {
        printf("[%d, %d, %d]\n", list[tmp][0], list[tmp][1], list[tmp][2]);
        free(list[tmp]);
    }
    printf("return size: %d\n", returnSize);
    free(returnColumnSizes);
    return 0;
}

/*

    output:

    [-5, 1, 4]
    [-4, -4, 8]
    [-4, 0, 4]
    [-4, 1, 3]
    [-2, -2, 4]
    [-2, 1, 1]
    [0, 0, 0]
    return size: 7

*/
