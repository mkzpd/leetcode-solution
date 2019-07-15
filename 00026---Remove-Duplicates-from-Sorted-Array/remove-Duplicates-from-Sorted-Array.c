#include <stdio.h>

int removeDuplicates(int *nums, int numsSize)
{
	if (numsSize == 0)
		return numsSize;

	int j = 1;
	for (int i = 1; i < numsSize; i++)
		if (nums[i] != nums[i-1])
			nums[j++] = nums[i];

	return j;
}

int main()
{
    int nums[] = {0,0,1,1,1,2,2,3,3,4};
    int Size = sizeof(nums) / sizeof(nums[0]);
    int res = removeDuplicates(nums, Size);
    printf("%d\n",res);
    return 0;
}

