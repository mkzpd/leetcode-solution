/*
 * @lc app=leetcode id=982 lang=c
 *
 * [982] Triples with Bitwise AND Equal To Zero
 *
 * https://leetcode.com/problems/triples-with-bitwise-and-equal-to-zero/description/
 *
 * algorithms
 * Hard (53.84%)
 * Total Accepted:    4.5K
 * Total Submissions: 8.4K
 * Testcase Example:  '[2,1,3]'
 *
 * Given an array of integers A, find the number of triples of indices (i, j,
 * k) such that:
 * 
 * 
 * 0 <= i < A.length
 * 0 <= j < A.length
 * 0 <= k < A.length
 * A[i] & A[j] & A[k] == 0, where & represents the bitwise-AND operator.
 * 
 * 
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: [2,1,3]
 * Output: 12
 * Explanation: We could choose the following i, j, k triples:
 * (i=0, j=0, k=1) : 2 & 2 & 1
 * (i=0, j=1, k=0) : 2 & 1 & 2
 * (i=0, j=1, k=1) : 2 & 1 & 1
 * (i=0, j=1, k=2) : 2 & 1 & 3
 * (i=0, j=2, k=1) : 2 & 3 & 1
 * (i=1, j=0, k=0) : 1 & 2 & 2
 * (i=1, j=0, k=1) : 1 & 2 & 1
 * (i=1, j=0, k=2) : 1 & 2 & 3
 * (i=1, j=1, k=0) : 1 & 1 & 2
 * (i=1, j=2, k=0) : 1 & 3 & 2
 * (i=2, j=0, k=1) : 3 & 2 & 1
 * (i=2, j=1, k=0) : 3 & 1 & 2
 * 
 * 
 * 
 * 
 * Note:
 * 
 * 
 * 1 <= A.length <= 1000
 * 0 <= A[i] < 2^16
 * 
 * 
 */


int countTriplets(int* A, int ASize){

}


