#
# @lc app=leetcode id=767 lang=python3
#
# [767] Reorganize String
#
# https://leetcode.com/problems/reorganize-string/description/
#
# algorithms
# Medium (43.96%)
# Total Accepted:    35.4K
# Total Submissions: 80.6K
# Testcase Example:  '"aab"'
#
# Given a string S, check if the letters can be rearranged so that two
# characters that are adjacent to each other are not the same.
# 
# If possible, output any possible result.  If not possible, return the empty
# string.
# 
# Example 1:
# 
# 
# Input: S = "aab"
# Output: "aba"
# 
# 
# Example 2:
# 
# 
# Input: S = "aaab"
# Output: ""
# 
# 
# Note:
# 
# 
# S will consist of lowercase letters and have length in range [1, 500].
# 
# 
# 
# 
#
class Solution:
    def reorganizeString(self, S: str) -> str:
        
