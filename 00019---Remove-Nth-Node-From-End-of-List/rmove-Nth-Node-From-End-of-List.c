#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode* front = head;
    struct ListNode* behind = head;

    while (front != NULL) {
        front = front->next;

        if (n-- < 0) behind = behind->next;
    }
    if (n == 0) head = head->next;
    else behind->next = behind->next->next;
    return head;
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
    struct ListNode *L, *res;
    if(argc != 3){
        fprintf(stderr, "Usage: ./test number nth");
        exit(1);
    }
    L = createNode(argv[1]);
    res = removeNthFromEnd(L, atoi(argv[2]));

    printShow(res);
    return 0;
}

