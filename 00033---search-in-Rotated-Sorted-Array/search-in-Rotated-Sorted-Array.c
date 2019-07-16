#include <stdio.h>

int search(int* nums, int numsSize, int target) {
    int l = 0, r = numsSize - 1;
    int res = -1;
    while(l <= r) {
        int mid = (l + r) / 2;
        if(nums[mid] == target) 
            return mid;
        if(target >= nums[l]) {
            if(nums[mid] >= nums[l] && nums[mid] < target) 
                l = mid + 1;
            else 
                r = mid - 1;
        } else if(target < nums[l]) {
            if(nums[mid] < nums[l] && nums[mid] > target) 
                r = mid - 1;
            else 
                l = mid + 1;
        }
    }
    return res;
}

int main()
{
    int nums[] = {4,5,6,7,0,1,2};
    int Size = sizeof(nums) / sizeof(nums[0]);
    int target = 0;
    int res = search(nums, Size, target);
    printf("%d\n",res);
    return 0;
}

