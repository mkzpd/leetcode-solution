/*
 * @lc app=leetcode id=381 lang=c
 *
 * [381] Insert Delete GetRandom O(1) - Duplicates allowed
 *
 * https://leetcode.com/problems/insert-delete-getrandom-o1-duplicates-allowed/description/
 *
 * algorithms
 * Hard (31.98%)
 * Total Accepted:    42.2K
 * Total Submissions: 132K
 * Testcase Example:  '["RandomizedCollection","insert","insert","insert","getRandom","remove","getRandom"]\n[[],[1],[1],[2],[],[1],[]]'
 *
 * Design a data structure that supports all following operations in average
 * O(1) time.
 * Note: Duplicate elements are allowed.
 * 
 * 
 * insert(val): Inserts an item val to the collection.
 * remove(val): Removes an item val from the collection if present.
 * getRandom: Returns a random element from current collection of elements. The
 * probability of each element being returned is linearly related to the number
 * of same value the collection contains.
 * 
 * 
 * 
 * Example:
 * 
 * // Init an empty collection.
 * RandomizedCollection collection = new RandomizedCollection();
 * 
 * // Inserts 1 to the collection. Returns true as the collection did not
 * contain 1.
 * collection.insert(1);
 * 
 * // Inserts another 1 to the collection. Returns false as the collection
 * contained 1. Collection now contains [1,1].
 * collection.insert(1);
 * 
 * // Inserts 2 to the collection, returns true. Collection now contains
 * [1,1,2].
 * collection.insert(2);
 * 
 * // getRandom should return 1 with the probability 2/3, and returns 2 with
 * the probability 1/3.
 * collection.getRandom();
 * 
 * // Removes 1 from the collection, returns true. Collection now contains
 * [1,2].
 * collection.remove(1);
 * 
 * // getRandom should return 1 and 2 both equally likely.
 * collection.getRandom();
 * 
 * 
 */



typedef struct {
    
} RandomizedCollection;

/** Initialize your data structure here. */

RandomizedCollection* randomizedCollectionCreate() {
    
}

/** Inserts a value to the collection. Returns true if the collection did not already contain the specified element. */
bool randomizedCollectionInsert(RandomizedCollection* obj, int val) {
  
}

/** Removes a value from the collection. Returns true if the collection contained the specified element. */
bool randomizedCollectionRemove(RandomizedCollection* obj, int val) {
  
}

/** Get a random element from the collection. */
int randomizedCollectionGetRandom(RandomizedCollection* obj) {
  
}

void randomizedCollectionFree(RandomizedCollection* obj) {
    
}

/**
 * Your RandomizedCollection struct will be instantiated and called as such:
 * RandomizedCollection* obj = randomizedCollectionCreate();
 * bool param_1 = randomizedCollectionInsert(obj, val);
 
 * bool param_2 = randomizedCollectionRemove(obj, val);
 
 * int param_3 = randomizedCollectionGetRandom(obj);
 
 * randomizedCollectionFree(obj);
*/
