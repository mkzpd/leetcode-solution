/*
 * @lc app=leetcode id=14 lang=c
 *
 * [14] Longest Common Prefix
 *
 * https://leetcode.com/problems/longest-common-prefix/description/
 *
 * algorithms
 * Easy (33.55%)
 * Total Accepted:    469.5K
 * Total Submissions: 1.4M
 * Testcase Example:  '["flower","flow","flight"]'
 *
 * Write a function to find the longest common prefix string amongst an array
 * of strings.
 * 
 * If there is no common prefix, return an empty string "".
 * 
 * Example 1:
 * 
 * 
 * Input: ["flower","flow","flight"]
 * Output: "fl"
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: ["dog","racecar","car"]
 * Output: ""
 * Explanation: There is no common prefix among the input strings.
 * 
 * 
 * Note:
 * 
 * All given inputs are in lowercase letters a-z.
 * 
 */


// maybe have bug that char *temp be changed.

char * longestCommonPrefix(char ** strs, int strsSize){
    char* temp;
    int i, j;
    if(strsSize <= 0)
        return "";
    temp = strs[0];
    for(i=1; i<strsSize; i++){
        j = 0;
        while(temp[j] && strs[i][j] && temp[j]==strs[i][j])
            j++;
        temp[j] = '\0';
    }
    return temp;
}



