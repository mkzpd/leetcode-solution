#
# @lc app=leetcode id=324 lang=python3
#
# [324] Wiggle Sort II
#
# https://leetcode.com/problems/wiggle-sort-ii/description/
#
# algorithms
# Medium (28.46%)
# Total Accepted:    66.1K
# Total Submissions: 232.2K
# Testcase Example:  '[1,5,1,1,6,4]'
#
# Given an unsorted array nums, reorder it such that nums[0] < nums[1] >
# nums[2] < nums[3]....
# 
# Example 1:
# 
# 
# Input: nums = [1, 5, 1, 1, 6, 4]
# Output: One possible answer is [1, 4, 1, 5, 1, 6].
# 
# Example 2:
# 
# 
# Input: nums = [1, 3, 2, 2, 3, 1]
# Output: One possible answer is [2, 3, 1, 3, 1, 2].
# 
# Note:
# You may assume all input has valid answer.
# 
# Follow Up:
# Can you do it in O(n) time and/or in-place with O(1) extra space?
#
class Solution:
    def wiggleSort(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        
