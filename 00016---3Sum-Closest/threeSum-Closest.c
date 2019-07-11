#include <stdio.h>
#include <stdlib.h>

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

int main()
{
    int nums[] = {-1,2,1,-4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 1;
    int res = threeSumClosest(nums, numsSize, target);
    printf("%d\n",res);
    return 0;
}

