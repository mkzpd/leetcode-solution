#
# @lc app=leetcode id=590 lang=python3
#
# [590] N-ary Tree Postorder Traversal
#
# https://leetcode.com/problems/n-ary-tree-postorder-traversal/description/
#
# algorithms
# Easy (68.86%)
# Total Accepted:    52.7K
# Total Submissions: 76.5K
# Testcase Example:  '{"$id":"1","children":[{"$id":"2","children":[{"$id":"5","children":[],"val":5},{"$id":"6","children":[],"val":6}],"val":3},{"$id":"3","children":[],"val":2},{"$id":"4","children":[],"val":4}],"val":1}'
#
# Given an n-ary tree, return the postorder traversal of its nodes' values.
# 
# For example, given a 3-ary tree:
# 
# 
# 
# 
# 
# 
# 
# Return its postorder traversal as: [5,6,3,2,4,1].
# 
# 
# Note:
# 
# Recursive solution is trivial, could you do it iteratively?
# 
#
"""
# Definition for a Node.
class Node:
    def __init__(self, val, children):
        self.val = val
        self.children = children
"""
class Solution:
    def postorder(self, root: 'Node') -> List[int]:
        
