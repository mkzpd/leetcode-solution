/*
 * @lc app=leetcode id=225 lang=c
 *
 * [225] Implement Stack using Queues
 *
 * https://leetcode.com/problems/implement-stack-using-queues/description/
 *
 * algorithms
 * Easy (39.35%)
 * Total Accepted:    130.1K
 * Total Submissions: 330.6K
 * Testcase Example:  '["MyStack","push","push","top","pop","empty"]\n[[],[1],[2],[],[],[]]'
 *
 * Implement the following operations of a stack using queues.
 * 
 * 
 * push(x) -- Push element x onto stack.
 * pop() -- Removes the element on top of the stack.
 * top() -- Get the top element.
 * empty() -- Return whether the stack is empty.
 * 
 * 
 * Example:
 * 
 * 
 * MyStack stack = new MyStack();
 * 
 * stack.push(1);
 * stack.push(2);  
 * stack.top();   // returns 2
 * stack.pop();   // returns 2
 * stack.empty(); // returns false
 * 
 * Notes:
 * 
 * 
 * You must use only standard operations of a queue -- which means only push to
 * back, peek/pop from front, size, and is empty operations are valid.
 * Depending on your language, queue may not be supported natively. You may
 * simulate a queue by using a list or deque (double-ended queue), as long as
 * you use only standard operations of a queue.
 * You may assume that all operations are valid (for example, no pop or top
 * operations will be called on an empty stack).
 * 
 * 
 */



typedef struct {
    
} MyStack;

/** Initialize your data structure here. */

MyStack* myStackCreate() {
    
}

/** Push element x onto stack. */
void myStackPush(MyStack* obj, int x) {
  
}

/** Removes the element on top of the stack and returns that element. */
int myStackPop(MyStack* obj) {
  
}

/** Get the top element. */
int myStackTop(MyStack* obj) {
  
}

/** Returns whether the stack is empty. */
bool myStackEmpty(MyStack* obj) {
  
}

void myStackFree(MyStack* obj) {
    
}

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);
 
 * int param_2 = myStackPop(obj);
 
 * int param_3 = myStackTop(obj);
 
 * bool param_4 = myStackEmpty(obj);
 
 * myStackFree(obj);
*/
