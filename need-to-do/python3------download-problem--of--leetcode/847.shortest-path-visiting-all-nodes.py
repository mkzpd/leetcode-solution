#
# @lc app=leetcode id=847 lang=python3
#
# [847] Shortest Path Visiting All Nodes
#
# https://leetcode.com/problems/shortest-path-visiting-all-nodes/description/
#
# algorithms
# Hard (48.60%)
# Total Accepted:    9.9K
# Total Submissions: 20.4K
# Testcase Example:  '[[1,2,3],[0],[0],[0]]'
#
# An undirected, connected graph of N nodes (labeled 0, 1, 2, ..., N-1) is
# given as graph.
# 
# graph.length = N, and j != i is in the list graph[i] exactly once, if and
# only if nodes i and j are connected.
# 
# Return the length of the shortest path that visits every node. You may start
# and stop at any node, you may revisit nodes multiple times, and you may reuse
# edges.
# 
# 
# 
# 
# 
# 
# Example 1:
# 
# 
# Input: [[1,2,3],[0],[0],[0]]
# Output: 4
# Explanation: One possible path is [1,0,2,0,3]
# 
# Example 2:
# 
# 
# Input: [[1],[0,2,4],[1,3,4],[2],[1,2]]
# Output: 4
# Explanation: One possible path is [0,1,4,2,3]
# 
# 
# 
# 
# Note:
# 
# 
# 1 <= graph.length <= 12
# 0 <= graph[i].length < graph.length
# 
# 
#
class Solution:
    def shortestPathLength(self, graph: List[List[int]]) -> int:
        
