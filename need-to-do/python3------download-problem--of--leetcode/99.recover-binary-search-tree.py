#
# @lc app=leetcode id=99 lang=python3
#
# [99] Recover Binary Search Tree
#
# https://leetcode.com/problems/recover-binary-search-tree/description/
#
# algorithms
# Hard (35.71%)
# Total Accepted:    128.3K
# Total Submissions: 359.4K
# Testcase Example:  '[1,3,null,null,2]'
#
# Two elements of a binary search tree (BST) are swapped by mistake.
# 
# Recover the tree without changing its structure.
# 
# Example 1:
# 
# 
# Input: [1,3,null,null,2]
# 
# 1
# /
# 3
# \
# 2
# 
# Output: [3,1,null,null,2]
# 
# 3
# /
# 1
# \
# 2
# 
# 
# Example 2:
# 
# 
# Input: [3,1,4,null,null,2]
# 
# ⁠ 3
# ⁠/ \
# 1   4
# /
# 2
# 
# Output: [2,1,4,null,null,3]
# 
# ⁠ 2
# ⁠/ \
# 1   4
# /
# ⁠ 3
# 
# 
# Follow up:
# 
# 
# A solution using O(n) space is pretty straight forward.
# Could you devise a constant space solution?
# 
# 
#
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def recoverTree(self, root: TreeNode) -> None:
        """
        Do not return anything, modify root in-place instead.
        """
        
