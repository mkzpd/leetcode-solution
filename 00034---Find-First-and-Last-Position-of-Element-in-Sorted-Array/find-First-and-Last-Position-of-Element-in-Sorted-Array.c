#include <stdio.h>
#include <stdlib.h>

int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    *returnSize=2;
    int *ret = (int *)malloc(sizeof(int)*2);
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

int main()
{
    int nums[] = {5,7,7,8,8,10};
    int Size = sizeof(nums) / sizeof(nums[0]);
    int target = 8;
    int returnSize = 0;
    int *res = searchRange(nums, Size, target, &returnSize);
    printf("%d %d\n",res[0],res[1]);
    free(res);
    return 0;
}

