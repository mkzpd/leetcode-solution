```
/*
 * @lc app=leetcode id=31 lang=c
 *
 * [31] Next Permutation
 *
 * https://leetcode.com/problems/next-permutation/description/
 *
 * algorithms
 * Medium (30.51%)
 * Total Accepted:    239.8K
 * Total Submissions: 785.8K
 * Testcase Example:  '[1,2,3]'
 *
 * Implement next permutation, which rearranges numbers into the
 * lexicographically next greater permutation of numbers.
 *
 * If such arrangement is not possible, it must rearrange it as the lowest
 * possible order (ie, sorted in ascending order).
 *
 * The replacement must be in-place and use only constant extra memory.
 *
 * Here are some examples. Inputs are in the left-hand column and its
 * corresponding outputs are in the right-hand column.
 *
 * 1,2,3 → 1,3,2
 * 3,2,1 → 1,2,3
 * 1,1,5 → 1,5,1
 *
 */

/*
 *    void nextPermutation(int* nums, int numsSize){
 *
 *    }
 *
 */






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
```
