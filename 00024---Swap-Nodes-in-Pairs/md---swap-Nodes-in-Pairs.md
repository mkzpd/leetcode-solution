```
/*
 * @lc app=leetcode id=24 lang=c
 *
 * [24] Swap Nodes in Pairs
 *
 * https://leetcode.com/problems/swap-nodes-in-pairs/description/
 *
 * algorithms
 * Medium (44.82%)
 * Total Accepted:    318.2K
 * Total Submissions: 710K
 * Testcase Example:  '[1,2,3,4]'
 *
 * Given a linked list, swap every two adjacent nodes and return its head.
 *
 * You may not modify the values in the list's nodes, only nodes itself may be
 * changed.
 *
 *
 *
 * Example:
 *
 *
 * Given 1->2->3->4, you should return the list as 2->1->4->3.
 *
 *
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


/*
 *    struct ListNode* swapPairs(struct ListNode* head){
 *
 *    }
 */






struct ListNode* swapPairs(struct ListNode* head) {
    if(head == NULL || head->next == NULL) return head;

    struct ListNode *tmp = head->next;
    head->next = swapPairs(tmp->next);
    tmp->next = head;
    return tmp;
}


```
