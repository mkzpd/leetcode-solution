#
# @lc app=leetcode id=718 lang=python3
#
# [718] Maximum Length of Repeated Subarray
#
# https://leetcode.com/problems/maximum-length-of-repeated-subarray/description/
#
# algorithms
# Medium (47.31%)
# Total Accepted:    40.8K
# Total Submissions: 86.2K
# Testcase Example:  '[1,2,3,2,1]\n[3,2,1,4,7]'
#
# Given two integer arrays A and B, return the maximum length of an subarray
# that appears in both arrays.
# 
# Example 1:
# 
# 
# Input:
# A: [1,2,3,2,1]
# B: [3,2,1,4,7]
# Output: 3
# Explanation: 
# The repeated subarray with maximum length is [3, 2, 1].
# 
# 
# 
# 
# Note:
# 
# 
# 1 <= len(A), len(B) <= 1000
# 0 <= A[i], B[i] < 100
# 
# 
# 
# 
#
class Solution:
    def findLength(self, A: List[int], B: List[int]) -> int:
        
