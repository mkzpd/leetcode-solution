/*
 * @lc app=leetcode id=432 lang=c
 *
 * [432] All O`one Data Structure
 *
 * https://leetcode.com/problems/all-oone-data-structure/description/
 *
 * algorithms
 * Hard (29.57%)
 * Total Accepted:    18.4K
 * Total Submissions: 62.4K
 * Testcase Example:  '["AllOne","getMaxKey","getMinKey"]\n[[],[],[]]'
 *
 * Implement a data structure supporting the following operations:
 * 
 * 
 * 
 * Inc(Key) - Inserts a new key  with value 1. Or increments an existing key by
 * 1. Key is guaranteed to be a non-empty string.
 * Dec(Key) - If Key's value is 1, remove it from the data structure. Otherwise
 * decrements an existing key by 1. If the key does not exist, this function
 * does nothing. Key is guaranteed to be a non-empty string.
 * GetMaxKey() - Returns one of the keys with maximal value. If no element
 * exists, return an empty string "".
 * GetMinKey() - Returns one of the keys with minimal value. If no element
 * exists, return an empty string "".
 * 
 * 
 * 
 * 
 * Challenge: Perform all these in O(1) time complexity.
 * 
 */



typedef struct {
    
} AllOne;

/** Initialize your data structure here. */

AllOne* allOneCreate() {
    
}

/** Inserts a new key <Key> with value 1. Or increments an existing key by 1. */
void allOneInc(AllOne* obj, char * key) {
  
}

/** Decrements an existing key by 1. If Key's value is 1, remove it from the data structure. */
void allOneDec(AllOne* obj, char * key) {
  
}

/** Returns one of the keys with maximal value. */
char * allOneGetMaxKey(AllOne* obj) {
  
}

/** Returns one of the keys with Minimal value. */
char * allOneGetMinKey(AllOne* obj) {
  
}

void allOneFree(AllOne* obj) {
    
}

/**
 * Your AllOne struct will be instantiated and called as such:
 * AllOne* obj = allOneCreate();
 * allOneInc(obj, key);
 
 * allOneDec(obj, key);
 
 * char * param_3 = allOneGetMaxKey(obj);
 
 * char * param_4 = allOneGetMinKey(obj);
 
 * allOneFree(obj);
*/
