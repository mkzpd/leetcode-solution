#
# @lc app=leetcode id=540 lang=python3
#
# [540] Single Element in a Sorted Array
#
# https://leetcode.com/problems/single-element-in-a-sorted-array/description/
#
# algorithms
# Medium (57.49%)
# Total Accepted:    64.3K
# Total Submissions: 111.9K
# Testcase Example:  '[1,1,2,3,3,4,4,8,8]'
#
# You are given a sorted array consisting of only integers where every element
# appears exactly twice, except for one element which appears exactly once.
# Find this single element that appears only once.
# 
# 
# 
# Example 1:
# 
# 
# Input: [1,1,2,3,3,4,4,8,8]
# Output: 2
# 
# 
# Example 2:
# 
# 
# Input: [3,3,7,7,10,11,11]
# Output: 10
# 
# 
# 
# 
# Note: Your solution should run in O(log n) time and O(1) space.
# 
#
class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        
