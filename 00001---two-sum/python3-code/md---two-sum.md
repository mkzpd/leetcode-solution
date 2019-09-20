#
# @lc app=leetcode id=1 lang=python3
#
# [1] Two Sum
#
# https://leetcode.com/problems/two-sum/description/
#
# algorithms
# Easy (44.54%)
# Total Accepted:    2.1M
# Total Submissions: 4.8M
# Testcase Example:  '[2,7,11,15]\n9'
#
# Given an array of integers, return indices of the two numbers such that they
# add up to a specific target.
# 
# You may assume that each input would have exactly one solution, and you may
# not use the same element twice.
# 
# Example:
# 
# 
# Given nums = [2, 7, 11, 15], target = 9,
# 
# Because nums[0] + nums[1] = 2 + 7 = 9,
# return [0, 1].
# 
# 
#





class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        if nums is None or len(nums) == 0:
            return []
        
        indices_of_values = {}
        for index, number in enumerate(nums):
            if target - number in indices_of_values:
                return [indices_of_values[target - number], index]
            indices_of_values[number] = index
