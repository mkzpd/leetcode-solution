#
# @lc app=leetcode id=1124 lang=python3
#
# [1124] Longest Well-Performing Interval
#
# https://leetcode.com/problems/longest-well-performing-interval/description/
#
# algorithms
# Medium (31.50%)
# Total Accepted:    6.1K
# Total Submissions: 19.4K
# Testcase Example:  '[9,9,6,0,6,6,9]'
#
# We are given hours, a list of the number of hours worked per day for a given
# employee.
# 
# A day is considered to be a tiring day if and only if the number of hours
# worked is (strictly) greater than 8.
# 
# A well-performing interval is an interval of days for which the number of
# tiring days is strictly larger than the number of non-tiring days.
# 
# Return the length of the longest well-performing interval.
# 
# 
# Example 1:
# 
# 
# Input: hours = [9,9,6,0,6,6,9]
# Output: 3
# Explanation: The longest well-performing interval is [9,9,6].
# 
# 
# 
# Constraints:
# 
# 
# 1 <= hours.length <= 10000
# 0 <= hours[i] <= 16
# 
# 
#
class Solution:
    def longestWPI(self, hours: List[int]) -> int:
        
