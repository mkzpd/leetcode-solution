#
# @lc app=leetcode id=952 lang=python3
#
# [952] Largest Component Size by Common Factor
#
# https://leetcode.com/problems/largest-component-size-by-common-factor/description/
#
# algorithms
# Hard (27.21%)
# Total Accepted:    5.8K
# Total Submissions: 21.2K
# Testcase Example:  '[4,6,15,35]'
#
# Given a non-empty array of unique positive integers A, consider the following
# graph:
# 
# 
# There are A.length nodes, labelled A[0] to A[A.length - 1];
# There is an edge between A[i] and A[j] if and only if A[i] and A[j] share a
# common factor greater than 1.
# 
# 
# Return the size of the largest connected component in the graph.
# 
# 
# 
# 
# 
# 
# 
# Example 1:
# 
# 
# Input: [4,6,15,35]
# Output: 4
# 
# 
# 
# 
# Example 2:
# 
# 
# Input: [20,50,9,63]
# Output: 2
# 
# 
# 
# 
# Example 3:
# 
# 
# Input: [2,3,6,7,4,12,21,39]
# Output: 8
# 
# 
# 
# Note:
# 
# 
# 1 <= A.length <= 20000
# 1 <= A[i] <= 100000
# 
# 
# 
# 
# 
#
class Solution:
    def largestComponentSize(self, A: List[int]) -> int:
        
