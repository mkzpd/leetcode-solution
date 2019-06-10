/*
 * @lc app=leetcode id=2 lang=c
 *
 * [2] Add Two Numbers
 *
 * https://leetcode.com/problems/add-two-numbers/description/
 *
 * algorithms
 * Medium (31.15%)
 * Total Accepted:    883.2K
 * Total Submissions: 2.8M
 * Testcase Example:  '[2,4,3]\n[5,6,4]'
 *
 * You are given two non-empty linked lists representing two non-negative
 * integers. The digits are stored in reverse order and each of their nodes
 * contain a single digit. Add the two numbers and return it as a linked list.
 * 
 * You may assume the two numbers do not contain any leading zero, except the
 * number 0 itself.
 * 
 * Example:
 * 
 * 
 * Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 * Output: 7 -> 0 -> 8
 * Explanation: 342 + 465 = 807.
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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Definition for singly-linked list. */
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *pre = NULL, *head = NULL, *res = NULL;
    int carry = 0;
    if(l1 == NULL && l2 == NULL)
        return NULL;
    if(l1 == NULL && l2 != NULL)
        return l2;
    if(l1 != NULL && l2 == NULL)
        return l1;
    while(l1 && l2){
        if(pre == NULL){
            head = res =(struct ListNode*)malloc(sizeof(struct ListNode));
        }
        else{
            res = (struct ListNode*)malloc(sizeof(struct ListNode));
            pre->next = res;
        }
        res->val = (l1->val + l2->val + carry) % 10;
        carry = (l1->val + l2->val + carry) / 10;
        
        l1 = l1->next;
        l2 = l2->next;
        res->next = NULL;
        pre = res;
    }
    while(l1){
        res = (struct ListNode*)malloc(sizeof(struct ListNode));
        res->val = (l1->val + carry) % 10;
        carry = (l1->val + carry) / 10;
        pre->next = res;
        res->next = NULL;
        l1 = l1->next;
        pre = res;
    }
    while(l2){
        res = (struct ListNode*)malloc(sizeof(struct ListNode));
        res->val = (l2->val + carry) % 10;
        carry = (l2->val + carry) / 10;
        pre->next = res;
        res->next = NULL;
        l2 = l2->next;
        pre = res;
    }
    if(carry > 0){
        res = (struct ListNode*)malloc(sizeof(struct ListNode));
        res->val = carry;
        res->next = NULL;
        pre->next = res;
    }
    return head;
}

static struct ListNode *createNode(const char *digits)
{
    struct ListNode *res, *p, *prev;
    int first = 1;
    int len = strlen(digits);
    const char *c = digits + len - 1;
    prev = NULL;
    while (len-- > 0) {
        p = (struct ListNode *)malloc(sizeof(*p));
        if (first) {
            first = 0;
            res = p;
        }
        p->val = *c-- - '0';
        p->next = NULL;
        if (prev != NULL) {
            prev->next = p;
        }
        prev = p;
    }

    return res;
}

void printShow(struct ListNode *ln)
{
    int sum = 0, factor = 1;
    while (ln != NULL) {
        sum += ln->val * factor;
        factor *= 10;
        ln = ln->next;
    }
    printf(" %d\n", sum);
}



int main(int argc, char **argv)
{
    if (argc < 3) {
        fprintf(stderr, "Usage: ./add-two-numbers n1 n2     (for example: ./add-two-numbers 243 564)\n");
        exit(-1);
    }

    struct ListNode *l1 = createNode(argv[1]);
    struct ListNode *l2 = createNode(argv[2]);
    struct ListNode *res = addTwoNumbers(l1, l2);
    printShow(l1);
    printShow(l2);
    printShow(res);
    return 0;
}
