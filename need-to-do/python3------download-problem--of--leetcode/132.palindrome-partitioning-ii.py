#
# @lc app=leetcode id=132 lang=python3
#
# [132] Palindrome Partitioning II
#
# https://leetcode.com/problems/palindrome-partitioning-ii/description/
#
# algorithms
# Hard (28.28%)
# Total Accepted:    111K
# Total Submissions: 392.4K
# Testcase Example:  '"aab"'
#
# Given a string s, partition s such that every substring of the partition is a
# palindrome.
# 
# Return the minimum cuts needed for a palindrome partitioning of s.
# 
# Example:
# 
# 
# Input: "aab"
# Output: 1
# Explanation: The palindrome partitioning ["aa","b"] could be produced using 1
# cut.
# 
# 
#
class Solution:
    def minCut(self, s: str) -> int:
        
