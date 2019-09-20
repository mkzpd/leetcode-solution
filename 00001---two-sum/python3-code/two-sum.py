#!/usr/bin/env python3
# coding=utf-8

from typing import List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        if nums is None or len(nums) == 0:
            return []

        indices_of_values = {}
        for index, number in enumerate(nums):
            if target - number in indices_of_values:
                return [indices_of_values[target - number], index]
            indices_of_values[number] = index

if __name__ == "__main__":
    aaa = Solution()
    res = []
    num = [2, 7, 11, 15]
    target = 9
    res = aaa.twoSum(num, target)
    print(res)
