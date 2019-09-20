#
# @lc app=leetcode id=1160 lang=python3
#
# [1160] Find Words That Can Be Formed by Characters
#
# https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/description/
#
# algorithms
# Easy (68.16%)
# Total Accepted:    14.8K
# Total Submissions: 21.7K
# Testcase Example:  '["cat","bt","hat","tree"]\n"atach"'
#
# You are given an array of strings words and a string chars.
# 
# A string is good if it can be formed by characters from chars (each character
# can only be used once).
# 
# Return the sum of lengths of all good strings in words.
# 
# 
# 
# Example 1:
# 
# 
# Input: words = ["cat","bt","hat","tree"], chars = "atach"
# Output: 6
# Explanation: 
# The strings that can be formed are "cat" and "hat" so the answer is 3 + 3 =
# 6.
# 
# 
# Example 2:
# 
# 
# Input: words = ["hello","world","leetcode"], chars = "welldonehoneyr"
# Output: 10
# Explanation: 
# The strings that can be formed are "hello" and "world" so the answer is 5 + 5
# = 10.
# 
# 
# 
# 
# Note:
# 
# 
# 1 <= words.length <= 1000
# 1 <= words[i].length, chars.length <= 100
# All strings contain lowercase English letters only.
# 
#
class Solution:
    def countCharacters(self, words: List[str], chars: str) -> int:
