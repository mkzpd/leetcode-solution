```
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

char* longestCommonPrefix(char** strs, int strsSize)
{
    int i, count = 0;
    char *result = (char *)malloc(sizeof(char) * 1000);
    while (strsSize > 0) {
        char c = strs[0][count];
        for (i = 1; i < strsSize; i++) {
            if (c != strs[i][count]) break;
        }
        if (i == strsSize && c != '\0') {
            result[count++] = c;
        } else {
            break;
        }
    }
    result[count++] = '\0';
    return result;
}

```
