#
# @lc app=leetcode id=462 lang=python3
#
# [462] Minimum Moves to Equal Array Elements II
#
# https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/description/
#
# algorithms
# Medium (52.76%)
# Total Accepted:    38.2K
# Total Submissions: 72.3K
# Testcase Example:  '[1,2,3]'
#
# Given a non-empty integer array, find the minimum number of moves required to
# make all array elements equal, where a move is incrementing a selected
# element by 1 or decrementing a selected element by 1.
# 
# You may assume the array's length is at most 10,000.
# 
# Example:
# 
# Input:
# [1,2,3]
# 
# Output:
# 2
# 
# Explanation:
# Only two moves are needed (remember each move increments or decrements one
# element):
# 
# [1,2,3]  =>  [2,2,3]  =>  [2,2,2]
# 
# 
#
class Solution:
    def minMoves2(self, nums: List[int]) -> int:
        
