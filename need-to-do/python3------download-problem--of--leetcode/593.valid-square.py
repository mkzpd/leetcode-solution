#
# @lc app=leetcode id=593 lang=python3
#
# [593] Valid Square
#
# https://leetcode.com/problems/valid-square/description/
#
# algorithms
# Medium (40.93%)
# Total Accepted:    22.1K
# Total Submissions: 54K
# Testcase Example:  '[0,0]\n[1,1]\n[1,0]\n[0,1]'
#
# Given the coordinates of four points in 2D space, return whether the four
# points could construct a square.
# 
# The coordinate (x,y) of a point is represented by an integer array with two
# integers.
# 
# Example:
# 
# 
# Input: p1 = [0,0], p2 = [1,1], p3 = [1,0], p4 = [0,1]
# Output: True
# 
# 
# 
# 
# Note:
# 
# 
# All the input integers are in the range [-10000, 10000].
# A valid square has four equal sides with positive length and four equal
# angles (90-degree angles).
# Input points have no order.
# 
# 
# 
# 
#
class Solution:
    def validSquare(self, p1: List[int], p2: List[int], p3: List[int], p4: List[int]) -> bool:
        
