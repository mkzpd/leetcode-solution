#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *createNode(char *digits)
{
    struct ListNode *res, *p, *prev;
    int i = 0, first = 1;
    int len = strlen(digits);
    char *c = digits;
    prev = NULL;
    while (i < len) {
        p = (struct ListNode *)malloc(sizeof(struct ListNode));
        if (first) {
            first = 0;
            res = p;
        }
        p->val = *(c++) - '0';
        p->next = NULL;
        if (prev != NULL) {
            prev->next = p;
        }
        prev = p;
        i++;
    }

    return res;
}


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

void printShow(struct ListNode *ln)
{
    while (ln != NULL) {
        printf("%d",ln->val);
        ln = ln->next;
    }
    printf("\n");
}


int main(int argc, char* argv[])
{
    struct ListNode *res, *l1, *l2;
    if (argc < 3) {
        fprintf(stderr, "Usage: ./test n1 n2     (for example: ./test 124 134)\n");
        exit(-1);
    }
    l1 = createNode(argv[1]);
    l2 = createNode(argv[2]);
    res = mergeTwoLists(l1, l2);

    printShow(res);
    return 0;
}

