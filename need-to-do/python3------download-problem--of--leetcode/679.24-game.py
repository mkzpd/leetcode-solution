#
# @lc app=leetcode id=679 lang=python3
#
# [679] 24 Game
#
# https://leetcode.com/problems/24-game/description/
#
# algorithms
# Hard (43.83%)
# Total Accepted:    24.1K
# Total Submissions: 54.9K
# Testcase Example:  '[4,1,8,7]'
#
# 
# You have 4 cards each containing a number from 1 to 9.  You need to judge
# whether they could operated through *, /, +, -, (, ) to get the value of
# 24.
# 
# 
# Example 1:
# 
# Input: [4, 1, 8, 7]
# Output: True
# Explanation: (8-4) * (7-1) = 24
# 
# 
# 
# Example 2:
# 
# Input: [1, 2, 1, 2]
# Output: False
# 
# 
# 
# Note:
# 
# The division operator / represents real division, not integer division.  For
# example, 4 / (1 - 2/3) = 12.
# Every operation done is between two numbers.  In particular, we cannot use -
# as a unary operator.  For example, with [1, 1, 1, 1] as input, the expression
# -1 - 1 - 1 - 1 is not allowed.
# You cannot concatenate numbers together.  For example, if the input is [1, 2,
# 1, 2], we cannot write this as 12 + 12.
# 
# 
# 
#
class Solution:
    def judgePoint24(self, nums: List[int]) -> bool:
        
