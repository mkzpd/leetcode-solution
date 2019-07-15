#include <stdio.h>

int removeElement(int* nums, int numsSize, int val) {
    
    int count = 0;
    for(int i=0;i<numsSize;i++)
    { 
        if(nums[i]!=val)
        {
            nums[count++] = nums[i];
        }
    }
    return count;
}

int main()
{
    int nums[] = {3,2,2,3};
    int Size = sizeof(nums) / sizeof(nums[0]);
    int val = 3;
    int res = removeElement(nums, Size, val);
    printf("%d\n",res);
    return 0;
}

