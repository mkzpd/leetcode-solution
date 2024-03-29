/*
 * @lc app=leetcode id=715 lang=c
 *
 * [715] Range Module
 *
 * https://leetcode.com/problems/range-module/description/
 *
 * algorithms
 * Hard (35.60%)
 * Total Accepted:    11.6K
 * Total Submissions: 32.6K
 * Testcase Example:  '["RangeModule","addRange","removeRange","queryRange","queryRange","queryRange"]\n[[],[10,20],[14,16],[10,14],[13,15],[16,17]]'
 *
 * A Range Module is a module that tracks ranges of numbers. Your task is to
 * design and implement the following interfaces in an efficient manner.
 * 
 * addRange(int left, int right) Adds the half-open interval [left, right),
 * tracking every real number in that interval.  Adding an interval that
 * partially overlaps with currently tracked numbers should add any numbers in
 * the interval [left, right) that are not already tracked.
 * 
 * queryRange(int left, int right) Returns true if and only if every real
 * number in the interval [left, right)
 * ⁠is currently being tracked.
 * 
 * removeRange(int left, int right) Stops tracking every real number currently
 * being tracked in the interval [left, right).
 * 
 * Example 1:
 * 
 * addRange(10, 20): null
 * removeRange(14, 16): null
 * queryRange(10, 14): true (Every number in [10, 14) is being tracked)
 * queryRange(13, 15): false (Numbers like 14, 14.03, 14.17 in [13, 15) are not
 * being tracked)
 * queryRange(16, 17): true (The number 16 in [16, 17) is still being tracked,
 * despite the remove operation)
 * 
 * 
 * 
 * Note:
 * A half open interval [left, right) denotes all real numbers left .
 * 
 * 0 < left < right < 10^9 in all calls to addRange, queryRange, removeRange.
 * The total number of calls to addRange in a single test case is at most 1000.
 * The total number of calls to queryRange in a single test case is at most
 * 5000.
 * The total number of calls to removeRange in a single test case is at most
 * 1000.
 * 
 */
typedef struct {
    
} RangeModule;


RangeModule* rangeModuleCreate() {
    
}

void rangeModuleAddRange(RangeModule* obj, int left, int right) {
  
}

bool rangeModuleQueryRange(RangeModule* obj, int left, int right) {
  
}

void rangeModuleRemoveRange(RangeModule* obj, int left, int right) {
  
}

void rangeModuleFree(RangeModule* obj) {
    
}

/**
 * Your RangeModule struct will be instantiated and called as such:
 * RangeModule* obj = rangeModuleCreate();
 * rangeModuleAddRange(obj, left, right);
 
 * bool param_2 = rangeModuleQueryRange(obj, left, right);
 
 * rangeModuleRemoveRange(obj, left, right);
 
 * rangeModuleFree(obj);
*/
