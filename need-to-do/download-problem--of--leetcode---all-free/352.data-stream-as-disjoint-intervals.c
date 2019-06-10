/*
 * @lc app=leetcode id=352 lang=c
 *
 * [352] Data Stream as Disjoint Intervals
 *
 * https://leetcode.com/problems/data-stream-as-disjoint-intervals/description/
 *
 * algorithms
 * Hard (43.53%)
 * Total Accepted:    24.2K
 * Total Submissions: 55.6K
 * Testcase Example:  '["SummaryRanges","addNum","getIntervals","addNum","getIntervals","addNum","getIntervals","addNum","getIntervals","addNum","getIntervals"]\n[[],[1],[],[3],[],[7],[],[2],[],[6],[]]'
 *
 * Given a data stream input of non-negative integers a1, a2, ..., an, ...,
 * summarize the numbers seen so far as a list of disjoint intervals.
 * 
 * For example, suppose the integers from the data stream are 1, 3, 7, 2, 6,
 * ..., then the summary will be:
 * 
 * 
 * [1, 1]
 * [1, 1], [3, 3]
 * [1, 1], [3, 3], [7, 7]
 * [1, 3], [7, 7]
 * [1, 3], [6, 7]
 * 
 * 
 * Follow up:
 * What if there are lots of merges and the number of disjoint intervals are
 * small compared to the data stream's size?
 * 
 * NOTE: input types have been changed on April 15, 2019. Please reset to
 * default code definition to get new method signature.
 * 
 */



typedef struct {
    
} SummaryRanges;

/** Initialize your data structure here. */

SummaryRanges* summaryRangesCreate() {
    
}

void summaryRangesAddNum(SummaryRanges* obj, int val) {
  
}

int** summaryRangesGetIntervals(SummaryRanges* obj, int* retSize, int** retColSize) {
  
}

void summaryRangesFree(SummaryRanges* obj) {
    
}

/**
 * Your SummaryRanges struct will be instantiated and called as such:
 * SummaryRanges* obj = summaryRangesCreate();
 * summaryRangesAddNum(obj, val);
 
 * int** param_2 = summaryRangesGetIntervals(obj, retSize, retColSize);
 
 * summaryRangesFree(obj);
*/
