/*
 * @lc app=leetcode id=3 lang=c
 *
 * [3] Longest Substring Without Repeating Characters
 *
 * https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
 *
 * algorithms
 * Medium (28.40%)
 * Total Accepted:    938K
 * Total Submissions: 3.3M
 * Testcase Example:  '"abcabcbb"'
 *
 * Given a string, find the length of the longest substring without repeating
 * characters.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: "abcabcbb"
 * Output: 3 
 * Explanation: The answer is "abc", with the length of 3. 
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: "bbbbb"
 * Output: 1
 * Explanation: The answer is "b", with the length of 1.
 * 
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: "pwwkew"
 * Output: 3
 * Explanation: The answer is "wke", with the length of 3. 
 * ⁠            Note that the answer must be a substring, "pwke" is a
 * subsequence and not a substring.
 * 
 * 
 * 
 * 
 * 
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int lengthOfLongestSubstring(char * s){
    int i, start = 0, maxLen = 0;
    int strLen = strlen(s);
    int lastAppear[128];
    memset(lastAppear,0xFF,sizeof(lastAppear));
    for(i = 0; i < strLen; i++){
        if(start > lastAppear[s[i]]){
            lastAppear[s[i]] = i;
            maxLen = (maxLen > i - start + 1) ? maxLen : i - start + 1;
        }
        else{
            start = lastAppear[s[i]] + 1;
            lastAppear[s[i]] = i;
        }
    }
    return maxLen;
}

int main(int argc, char **argv)
{
    if (argc != 2) {
        fprintf(stderr, "Usage: ./test string     (for example: ./test abcabcbb)\n");
        exit(-1);
    }

    printf("%d\n", lengthOfLongestSubstring(argv[1]));
    return 0;
}

