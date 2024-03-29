#
# @lc app=leetcode id=664 lang=python3
#
# [664] Strange Printer
#
# https://leetcode.com/problems/strange-printer/description/
#
# algorithms
# Hard (37.71%)
# Total Accepted:    10.5K
# Total Submissions: 27.8K
# Testcase Example:  '"aaabbb"'
#
# 
# There is a strange printer with the following two special requirements:
# 
# 
# The printer can only print a sequence of the same character each time.
# At each turn, the printer can print new characters starting from and ending
# at any places, and will cover the original existing characters.
# 
# 
# 
# 
# 
# Given a string consists of lower English letters only, your job is to count
# the minimum number of turns the printer needed in order to print it.
# 
# 
# Example 1:
# 
# Input: "aaabbb"
# Output: 2
# Explanation: Print "aaa" first and then print "bbb".
# 
# 
# 
# Example 2:
# 
# Input: "aba"
# Output: 2
# Explanation: Print "aaa" first and then print "b" from the second place of
# the string, which will cover the existing character 'a'.
# 
# 
# 
# Hint: Length of the given string will not exceed 100.
#
class Solution:
    def strangePrinter(self, s: str) -> int:
        
