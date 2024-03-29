#
# @lc app=leetcode id=397 lang=python3
#
# [397] Integer Replacement
#
# https://leetcode.com/problems/integer-replacement/description/
#
# algorithms
# Medium (31.87%)
# Total Accepted:    44.6K
# Total Submissions: 139.9K
# Testcase Example:  '8'
#
# 
# Given a positive integer n and you can do operations as follow:
# 
# 
# 
# 
# If n is even, replace n with n/2.
# If n is odd, you can replace n with either n + 1 or n - 1.
# 
# 
# 
# 
# What is the minimum number of replacements needed for n to become 1?
# 
# 
# 
# 
# Example 1:
# 
# Input:
# 8
# 
# Output:
# 3
# 
# Explanation:
# 8 -> 4 -> 2 -> 1
# 
# 
# 
# Example 2:
# 
# Input:
# 7
# 
# Output:
# 4
# 
# Explanation:
# 7 -> 8 -> 4 -> 2 -> 1
# or
# 7 -> 6 -> 3 -> 2 -> 1
# 
# 
#
class Solution:
    def integerReplacement(self, n: int) -> int:
        
