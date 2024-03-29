#
# @lc app=leetcode id=710 lang=python3
#
# [710] Random Pick with Blacklist
#
# https://leetcode.com/problems/random-pick-with-blacklist/description/
#
# algorithms
# Hard (32.09%)
# Total Accepted:    8K
# Total Submissions: 25.1K
# Testcase Example:  '["Solution", "pick", "pick", "pick"]\n[[1, []], [], [], []]'
#
# Given a blacklist B containing unique integers from [0, N), write a function
# to return a uniform random integer from [0, N) which is NOT in B.
# 
# Optimize it such that it minimizes the call to system’s Math.random().
# 
# Note:
# 
# 
# 1 <= N <= 1000000000
# 0 <= B.length < min(100000, N)
# [0, N) does NOT include N. See interval notation.
# 
# 
# Example 1:
# 
# 
# Input: 
# ["Solution","pick","pick","pick"]
# [[1,[]],[],[],[]]
# Output: [null,0,0,0]
# 
# 
# Example 2:
# 
# 
# Input: 
# ["Solution","pick","pick","pick"]
# [[2,[]],[],[],[]]
# Output: [null,1,1,1]
# 
# 
# Example 3:
# 
# 
# Input: 
# ["Solution","pick","pick","pick"]
# [[3,[1]],[],[],[]]
# Output: [null,0,0,2]
# 
# 
# Example 4:
# 
# 
# Input: 
# ["Solution","pick","pick","pick"]
# [[4,[2]],[],[],[]]
# Output: [null,1,3,1]
# 
# 
# Explanation of Input Syntax:
# 
# The input is two lists: the subroutines called and their arguments.
# Solution's constructor has two arguments, N and the blacklist B. pick has no
# arguments. Arguments are always wrapped with a list, even if there aren't
# any.
# 
#
class Solution:

    def __init__(self, N: int, blacklist: List[int]):
        

    def pick(self) -> int:
        


# Your Solution object will be instantiated and called as such:
# obj = Solution(N, blacklist)
# param_1 = obj.pick()
