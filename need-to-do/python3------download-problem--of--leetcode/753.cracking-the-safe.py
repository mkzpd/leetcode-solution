#
# @lc app=leetcode id=753 lang=python3
#
# [753] Cracking the Safe
#
# https://leetcode.com/problems/cracking-the-safe/description/
#
# algorithms
# Hard (48.00%)
# Total Accepted:    18.7K
# Total Submissions: 39K
# Testcase Example:  '1\n1'
#
# There is a box protected by a password. The password is a sequence of n
# digits where each digit can be one of the first k digits 0, 1, ..., k-1.
# 
# While entering a password, the last n digits entered will automatically be
# matched against the correct password.
# 
# For example, assuming the correct password is "345", if you type "012345",
# the box will open because the correct password matches the suffix of the
# entered password.
# 
# Return any password of minimum length that is guaranteed to open the box at
# some point of entering it.
# 
# 
# 
# Example 1:
# 
# 
# Input: n = 1, k = 2
# Output: "01"
# Note: "10" will be accepted too.
# 
# 
# Example 2:
# 
# 
# Input: n = 2, k = 2
# Output: "00110"
# Note: "01100", "10011", "11001" will be accepted too.
# 
# 
# 
# 
# Note:
# 
# 
# n will be in the range [1, 4].
# k will be in the range [1, 10].
# k^n will be at most 4096.
# 
# 
# 
# 
#
class Solution:
    def crackSafe(self, n: int, k: int) -> str:
        
