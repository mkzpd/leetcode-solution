#
# @lc app=leetcode id=301 lang=python3
#
# [301] Remove Invalid Parentheses
#
# https://leetcode.com/problems/remove-invalid-parentheses/description/
#
# algorithms
# Hard (40.30%)
# Total Accepted:    145.6K
# Total Submissions: 361.3K
# Testcase Example:  '"()())()"'
#
# Remove the minimum number of invalid parentheses in order to make the input
# string valid. Return all possible results.
# 
# Note: The input string may contain letters other than the parentheses ( and
# ).
# 
# Example 1:
# 
# 
# Input: "()())()"
# Output: ["()()()", "(())()"]
# 
# 
# Example 2:
# 
# 
# Input: "(a)())()"
# Output: ["(a)()()", "(a())()"]
# 
# 
# Example 3:
# 
# 
# Input: ")("
# Output: [""]
# 
#
class Solution:
    def removeInvalidParentheses(self, s: str) -> List[str]:
        
