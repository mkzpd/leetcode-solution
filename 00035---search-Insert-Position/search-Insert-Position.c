#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    int i=0;

    for (;i<numsSize&&nums[i]<target;i++) ;
    return i;
}

int main()
{
    int nums[] = {1,3,5,6};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 5;
    int res = searchInsert(nums, numsSize, target);
    printf("%d\n",res);
    return 0;
}

