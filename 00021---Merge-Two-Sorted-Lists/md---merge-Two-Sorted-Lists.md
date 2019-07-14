```
/*
 * @lc app=leetcode id=21 lang=c
 *
 * [21] Merge Two Sorted Lists
 *
 * https://leetcode.com/problems/merge-two-sorted-lists/description/
 *
 * algorithms
 * Easy (47.42%)
 * Total Accepted:    591.3K
 * Total Submissions: 1.2M
 * Testcase Example:  '[1,2,4]\n[1,3,4]'
 *
 * Merge two sorted linked lists and return it as a new list. The new list
 * should be made by splicing together the nodes of the first two lists.
 *
 * Example:
 *
 * Input: 1->2->4, 1->3->4
 * Output: 1->1->2->3->4->4
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
 *    struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
 *    
 *    }
 *
 */






struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    if(l1 == NULL) return l2;
    if(l2 == NULL) return l1;

    struct ListNode *head;
    if(l1->val > l2->val)
    {
        head = l2;
        l2 = l2->next;
    }
    else
    {
        head = l1;
        l1 = l1->next;
    }
    struct ListNode *cur = head;
    while(l1 != NULL && l2 != NULL)
    {
        if(l1->val > l2->val)
        {
            cur->next = l2;
            l2 = l2->next;
        }
        else
        {
            cur->next = l1;
            l1 = l1->next;
        }
        cur = cur->next;
    }

    if(l1 != NULL)
    {
        cur->next = l1;
    }
    else
    {
        cur->next = l2;
    }

    return head;

}
```
