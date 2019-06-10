/*
 * @lc app=leetcode id=307 lang=c
 *
 * [307] Range Sum Query - Mutable
 *
 * https://leetcode.com/problems/range-sum-query-mutable/description/
 *
 * algorithms
 * Medium (28.76%)
 * Total Accepted:    72.2K
 * Total Submissions: 251K
 * Testcase Example:  '["NumArray","sumRange","update","sumRange"]\n[[[1,3,5]],[0,2],[1,2],[0,2]]'
 *
 * Given an integer array nums, find the sum of the elements between indices i
 * and j (i ≤ j), inclusive.
 * 
 * The update(i, val) function modifies nums by updating the element at index i
 * to val.
 * 
 * Example:
 * 
 * 
 * Given nums = [1, 3, 5]
 * 
 * sumRange(0, 2) -> 9
 * update(1, 2)
 * sumRange(0, 2) -> 8
 * 
 * 
 * Note:
 * 
 * 
 * The array is only modifiable by the update function.
 * You may assume the number of calls to update and sumRange function is
 * distributed evenly.
 * 
 * 
 */



typedef struct {
    
} NumArray;


NumArray* numArrayCreate(int* nums, int numsSize) {
    
}

void numArrayUpdate(NumArray* obj, int i, int val) {
  
}

int numArraySumRange(NumArray* obj, int i, int j) {
  
}

void numArrayFree(NumArray* obj) {
    
}

/**
 * Your NumArray struct will be instantiated and called as such:
 * NumArray* obj = numArrayCreate(nums, numsSize);
 * numArrayUpdate(obj, i, val);
 
 * int param_2 = numArraySumRange(obj, i, j);
 
 * numArrayFree(obj);
*/
