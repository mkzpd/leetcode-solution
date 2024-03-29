#
# @lc app=leetcode id=354 lang=python3
#
# [354] Russian Doll Envelopes
#
# https://leetcode.com/problems/russian-doll-envelopes/description/
#
# algorithms
# Hard (34.41%)
# Total Accepted:    49.9K
# Total Submissions: 145.1K
# Testcase Example:  '[[5,4],[6,4],[6,7],[2,3]]'
#
# You have a number of envelopes with widths and heights given as a pair of
# integers (w, h). One envelope can fit into another if and only if both the
# width and height of one envelope is greater than the width and height of the
# other envelope.
# 
# What is the maximum number of envelopes can you Russian doll? (put one inside
# other)
# 
# Note:
# Rotation is not allowed.
# 
# Example:
# 
# 
# 
# Input: [[5,4],[6,4],[6,7],[2,3]]
# Output: 3 
# Explanation: The maximum number of envelopes you can Russian doll is 3 ([2,3]
# => [5,4] => [6,7]).
# 
# 
# 
#
class Solution:
    def maxEnvelopes(self, envelopes: List[List[int]]) -> int:
        
