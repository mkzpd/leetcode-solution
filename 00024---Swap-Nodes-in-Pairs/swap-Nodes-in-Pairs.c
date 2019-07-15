#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* swapPairs(struct ListNode* head) {
    if(head == NULL || head->next == NULL) return head;

    struct ListNode *tmp = head->next;
    head->next = swapPairs(tmp->next);
    tmp->next = head;
    return tmp;
}

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

void printShow(struct ListNode *ln)
{
    while (ln != NULL) {
        printf("%d",ln->val);
        ln = ln->next;
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
    struct ListNode *l1, *res;
    if(argc != 2){
        fprintf(stderr, "Usage: ./test number\n");
        exit(1);
    }
    l1 = createNode(argv[1]);
    res = swapPairs(l1);
    printShow(res);
    return 0;
}

