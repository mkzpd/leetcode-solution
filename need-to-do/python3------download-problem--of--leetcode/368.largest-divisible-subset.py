#
# @lc app=leetcode id=368 lang=python3
#
# [368] Largest Divisible Subset
#
# https://leetcode.com/problems/largest-divisible-subset/description/
#
# algorithms
# Medium (35.36%)
# Total Accepted:    50.8K
# Total Submissions: 143.6K
# Testcase Example:  '[1,2,3]'
#
# Given a set of distinct positive integers, find the largest subset such that
# every pair (Si, Sj) of elements in this subset satisfies:
# 
# Si % Sj = 0 or Sj % Si = 0.
# 
# If there are multiple solutions, return any subset is fine.
# 
# Example 1:
# 
# 
# 
# Input: [1,2,3]
# Output: [1,2] (of course, [1,3] will also be ok)
# 
# 
# 
# Example 2:
# 
# 
# Input: [1,2,4,8]
# Output: [1,2,4,8]
# 
# 
# 
#
class Solution:
    def largestDivisibleSubset(self, nums: List[int]) -> List[int]:
        
