#
# @lc app=leetcode id=493 lang=python3
#
# [493] Reverse Pairs
#
# https://leetcode.com/problems/reverse-pairs/description/
#
# algorithms
# Hard (23.71%)
# Total Accepted:    28.1K
# Total Submissions: 118.4K
# Testcase Example:  '[1,3,2,3,1]'
#
# Given an array nums, we call (i, j) an important reverse pair if i < j and
# nums[i] > 2*nums[j].
# 
# You need to return the number of important reverse pairs in the given array.
# 
# Example1:
# 
# Input: [1,3,2,3,1]
# Output: 2
# 
# 
# Example2:
# 
# Input: [2,4,3,5,1]
# Output: 3
# 
# 
# Note:
# 
# The length of the given array will not exceed 50,000.
# All the numbers in the input array are in the range of 32-bit integer.
# 
# 
#
class Solution:
    def reversePairs(self, nums: List[int]) -> int:
        
