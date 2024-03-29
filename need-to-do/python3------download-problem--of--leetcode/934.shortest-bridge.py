#
# @lc app=leetcode id=934 lang=python3
#
# [934] Shortest Bridge
#
# https://leetcode.com/problems/shortest-bridge/description/
#
# algorithms
# Medium (44.74%)
# Total Accepted:    13.1K
# Total Submissions: 29.2K
# Testcase Example:  '[[0,1],[1,0]]'
#
# In a given 2D binary array A, there are two islands.  (An island is a
# 4-directionally connected group of 1s not connected to any other 1s.)
# 
# Now, we may change 0s to 1s so as to connect the two islands together to form
# 1 island.
# 
# Return the smallest number of 0s that must be flipped.  (It is guaranteed
# that the answer is at least 1.)
# 
# 
# 
# Example 1:
# 
# 
# Input: [[0,1],[1,0]]
# Output: 1
# 
# 
# 
# Example 2:
# 
# 
# Input: [[0,1,0],[0,0,0],[0,0,1]]
# Output: 2
# 
# 
# 
# Example 3:
# 
# 
# Input: [[1,1,1,1,1],[1,0,0,0,1],[1,0,1,0,1],[1,0,0,0,1],[1,1,1,1,1]]
# Output: 1
# 
# 
# 
# 
# 
# Note:
# 
# 
# 1 <= A.length = A[0].length <= 100
# A[i][j] == 0 or A[i][j] == 1
# 
# 
# 
# 
# 
# 
# 
#
class Solution:
    def shortestBridge(self, A: List[List[int]]) -> int:
        
