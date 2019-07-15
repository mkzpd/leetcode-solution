#include <stdio.h>

//reverse the array
void reverse(int* nums, int numsSize) {
	int low = 0, high = numsSize - 1;
		while (low < high) {
			int temp = nums[low];
			nums[low++] = nums[high];
			nums[high--] = temp;
		}
}

void nextPermutation(int* nums, int numsSize) {
    //decide the start index, we will rearrange array from it to the end
	int i = 0, j = 0;
	for (i = numsSize - 2;i >= 0;i--) {
		if (nums[i] < nums[i + 1])
			break;
	}
	if (-1 == i) { //just return the reversed array
		reverse(nums, numsSize);
	} else { // start to rearrange the array
		//get number larger than nums[i] and closest to it
		for (j = numsSize - 1;j >= i+1;j--) {
			if (nums[j] > nums[i])
				break;
		}
		//for example [1 6 18 14 12 8 5 4 3]
        //exchange nums[i] and nums[j]
        //here nums[i] is 6 and nums[j] is 8
		int middle = nums[j];
		nums[j] = nums[i];
		nums[i] = middle;
		//result is [1 8 18 14 12 6 5 4 3]
        //then just reverse the remaining array
        //here from 18 to 3
		int low = i + 1, high = numsSize - 1;
		while (low < high) {
			int temp = nums[low];
			nums[low++] = nums[high];
			nums[high--] = temp;
		}
		//result is 1 8 3 4 5 6 12 14 18
	}
}

void printNums(int *nums, int Size)
{
    int i;
    for(i = 0; i < Size; i++){
        printf("%d ",nums[i]);
    }
    printf("\n");
}

int main()
{
    int nums[] = {1,1,5};
    int Size = sizeof(nums) / sizeof(nums[0]);
    nextPermutation(nums,Size);

    printNums(nums,Size);
    return 0;
}

