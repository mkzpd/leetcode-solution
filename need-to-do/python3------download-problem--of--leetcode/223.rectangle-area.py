#
# @lc app=leetcode id=223 lang=python3
#
# [223] Rectangle Area
#
# https://leetcode.com/problems/rectangle-area/description/
#
# algorithms
# Medium (36.36%)
# Total Accepted:    92.6K
# Total Submissions: 254.7K
# Testcase Example:  '-3\n0\n3\n4\n0\n-1\n9\n2'
#
# Find the total area covered by two rectilinear rectangles in a 2D plane.
# 
# Each rectangle is defined by its bottom left corner and top right corner as
# shown in the figure.
# 
# 
# 
# Example:
# 
# 
# Input: A = -3, B = 0, C = 3, D = 4, E = 0, F = -1, G = 9, H = 2
# Output: 45
# 
# Note:
# 
# Assume that the total area is never beyond the maximum possible value of int.
# 
#
class Solution:
    def computeArea(self, A: int, B: int, C: int, D: int, E: int, F: int, G: int, H: int) -> int:
        
