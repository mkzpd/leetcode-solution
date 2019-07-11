```
/*
 * @lc app=leetcode id=16 lang=c
 *
 * [16] 3Sum Closest
 *
 * https://leetcode.com/problems/3sum-closest/description/
 *
 * algorithms
 * Medium (45.77%)
 * Total Accepted:    350.1K
 * Total Submissions: 764.9K
 * Testcase Example:  '[-1,2,1,-4]\n1'
 *
 * Given an array nums of n integers and an integer target, find three integers
 * in nums such that the sum is closest to target. Return the sum of the three
 * integers. You may assume that each input would have exactly one solution.
 *
 * Example:
 *
 *
 * Given array nums = [-1, 2, 1, -4], and target = 1.
 *
 * The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
 *
 *
 */

 /*
  *
  * int threeSumClosest(int* nums, int numsSize, int target){
  *
  *  }
  *
  */


int cmp(const void * a, const void * b) 
{
    return (*(int*)a - *(int*)b); 
} 

int threeSumClosest(int* nums, int numsSize, int target)
{
	qsort(nums, numsSize, sizeof(int), cmp);
	int i, j, k, t, temp = nums[0] + nums[1] + nums[numsSize - 1];

	for (i = 0; i < numsSize; i++)
	{
		j = i + 1; k = numsSize - 1;
		while (j < k)
		{
            t = nums[i] + nums[j] + nums[k];
			if (t == target) return target;
            else if (abs(t - target) < abs(temp - target)) 
                temp = t;
			else if (t < target) 
                j++;
			else 
                k--; 
		}
	}
	return temp;
} 
```
