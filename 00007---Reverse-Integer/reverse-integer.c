/*
 * @lc app=leetcode id=7 lang=c
 *
 * [7] Reverse Integer
 *
 * https://leetcode.com/problems/reverse-integer/description/
 *
 * algorithms
 * Easy (25.31%)
 * Total Accepted:    698.4K
 * Total Submissions: 2.8M
 * Testcase Example:  '123'
 *
 * Given a 32-bit signed integer, reverse digits of an integer.
 * 
 * Example 1:
 * 
 * 
 * Input: 123
 * Output: 321
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: -123
 * Output: -321
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: 120
 * Output: 21
 * 
 * 
 * Note:
 * Assume we are dealing with an environment which could only store integers
 * within the 32-bit signed integer range: [−2^31,  2^31 − 1]. For the purpose
 * of this problem, assume that your function returns 0 when the reversed
 * integer overflows.
 * 
 */

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int reverse(int x){
    long long val = 0;
    do{
        val = val * 10 + x % 10;
        x /= 10;
    }while(x);
    return (val > INT_MAX || val < INT_MIN) ? 0 : val;
}
int main(int argc, char**argv)
{
    if (argc != 2) {
        fprintf(stderr, "Usage: ./test i     (for example: ./test -123)\n");
        return 0;
    }
    printf("\n");
    int n = atoi(argv[1]);
    printf("%d  ==>  %d  \n",  n, reverse(n));
    return 0;
}

