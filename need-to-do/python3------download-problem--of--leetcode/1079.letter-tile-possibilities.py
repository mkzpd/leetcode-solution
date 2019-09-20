#
# @lc app=leetcode id=1079 lang=python3
#
# [1079] Letter Tile Possibilities
#
# https://leetcode.com/problems/letter-tile-possibilities/description/
#
# algorithms
# Medium (74.89%)
# Total Accepted:    12.6K
# Total Submissions: 16.9K
# Testcase Example:  '"AAB"'
#
# You have a set of tiles, where each tile has one letter tiles[i] printed on
# it.  Return the number of possible non-empty sequences of letters you can
# make.
# 
# 
# 
# Example 1:
# 
# 
# Input: "AAB"
# Output: 8
# Explanation: The possible sequences are "A", "B", "AA", "AB", "BA", "AAB",
# "ABA", "BAA".
# 
# 
# 
# Example 2:
# 
# 
# Input: "AAABBC"
# Output: 188
# 
# 
# 
# 
# 
# Note:
# 
# 
# 1 <= tiles.length <= 7
# tiles consists of uppercase English letters.
# 
#
class Solution:
    def numTilePossibilities(self, tiles: str) -> int:
        
