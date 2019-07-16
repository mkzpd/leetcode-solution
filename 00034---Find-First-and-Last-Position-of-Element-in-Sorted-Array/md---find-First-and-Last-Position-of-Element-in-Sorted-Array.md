```
/*
 * @lc app=leetcode id=34 lang=c
 *
 * [34] Find First and Last Position of Element in Sorted Array
 *
 * https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
 *
 * algorithms
 * Medium (33.62%)
 * Total Accepted:    304.5K
 * Total Submissions: 905.9K
 * Testcase Example:  '[5,7,7,8,8,10]\n8'
 *
 * Given an array of integers nums sorted in ascending order, find the starting
 * and ending position of a given target value.
 *
 * Your algorithm's runtime complexity must be in the order of O(log n).
 *
 * If the target is not found in the array, return [-1, -1].
 *
 * Example 1:
 *
 *
 * Input: nums = [5,7,7,8,8,10], target = 8
 * Output: [3,4]
 *
 * Example 2:
 *
 *
 * Input: nums = [5,7,7,8,8,10], target = 6
 * Output: [-1,-1]
 *
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

/*
 *  int* searchRange(int* nums, int numsSize, int target, int* returnSize){
 *
 *   }
 */





int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    *returnSize=2;
    int *ret=malloc(sizeof(int)*2);
    int i=0,j=numsSize-1,mid;
    while(i<=j)
    {
        mid=(i+j)/2;
        if(nums[mid]<target)
            i=mid+1; 
        else if(nums[mid]>target)
            j=mid-1;
        else
        {
            int k=mid;
            while(mid>=0&&nums[mid]==target){
                mid--;
            }
            ret[0]=mid+1;
            while(k<numsSize&&nums[k]==target){
                k++;
            }
            ret[1]=k-1;
            return ret;
        }
       
    }
    ret[0]=ret[1]=-1;
    return ret;
}

```
