#
# @lc app=leetcode id=522 lang=python3
#
# [522] Longest Uncommon Subsequence II
#
# https://leetcode.com/problems/longest-uncommon-subsequence-ii/description/
#
# algorithms
# Medium (33.14%)
# Total Accepted:    18.2K
# Total Submissions: 55K
# Testcase Example:  '["aba","cdc","eae"]'
#
# 
# Given a list of strings, you need to find the longest uncommon subsequence
# among them. The longest uncommon subsequence is defined as the longest
# subsequence of one of these strings and this subsequence should not be any
# subsequence of the other strings.
# 
# 
# 
# A subsequence is a sequence that can be derived from one sequence by deleting
# some characters without changing the order of the remaining elements.
# Trivially, any string is a subsequence of itself and an empty string is a
# subsequence of any string.
# 
# 
# 
# The input will be a list of strings, and the output needs to be the length of
# the longest uncommon subsequence. If the longest uncommon subsequence doesn't
# exist, return -1.
# 
# 
# Example 1:
# 
# Input: "aba", "cdc", "eae"
# Output: 3
# 
# 
# 
# Note:
# 
# All the given strings' lengths will not exceed 10.
# The length of the given list will be in the range of [2, 50].
# 
# 
#
class Solution:
    def findLUSlength(self, strs: List[str]) -> int:
        
