#
# @lc app=leetcode id=382 lang=python3
#
# [382] Linked List Random Node
#
# https://leetcode.com/problems/linked-list-random-node/description/
#
# algorithms
# Medium (49.93%)
# Total Accepted:    57.3K
# Total Submissions: 114.9K
# Testcase Example:  '["Solution","getRandom"]\n[[[1,2,3]],[]]'
#
# Given a singly linked list, return a random node's value from the linked
# list. Each node must have the same probability of being chosen.
# 
# Follow up:
# What if the linked list is extremely large and its length is unknown to you?
# Could you solve this efficiently without using extra space?
# 
# 
# Example:
# 
# // Init a singly linked list [1,2,3].
# ListNode head = new ListNode(1);
# head.next = new ListNode(2);
# head.next.next = new ListNode(3);
# Solution solution = new Solution(head);
# 
# // getRandom() should return either 1, 2, or 3 randomly. Each element should
# have equal probability of returning.
# solution.getRandom();
# 
# 
#
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:

    def __init__(self, head: ListNode):
        """
        @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node.
        """
        

    def getRandom(self) -> int:
        """
        Returns a random node's value.
        """
        


# Your Solution object will be instantiated and called as such:
# obj = Solution(head)
# param_1 = obj.getRandom()
