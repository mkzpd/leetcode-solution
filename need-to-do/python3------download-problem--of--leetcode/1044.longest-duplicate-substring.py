#
# @lc app=leetcode id=1044 lang=python3
#
# [1044] Longest Duplicate Substring
#
# https://leetcode.com/problems/longest-duplicate-substring/description/
#
# algorithms
# Hard (23.27%)
# Total Accepted:    3.2K
# Total Submissions: 13.6K
# Testcase Example:  '"banana"'
#
# Given a string S, consider all duplicated substrings: (contiguous) substrings
# of S that occur 2 or more times.  (The occurrences may overlap.)
# 
# Return any duplicated substring that has the longest possible length.  (If S
# does not have a duplicated substring, the answer is "".)
# 
# 
# 
# Example 1:
# 
# 
# Input: "banana"
# Output: "ana"
# 
# 
# Example 2:
# 
# 
# Input: "abcd"
# Output: ""
# 
# 
# 
# 
# Note:
# 
# 
# 2 <= S.length <= 10^5
# S consists of lowercase English letters.
# 
#
class Solution:
    def longestDupSubstring(self, S: str) -> str:
        
