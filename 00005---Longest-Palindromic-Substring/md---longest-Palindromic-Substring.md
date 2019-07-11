```
/*
 * @lc app=leetcode id=5 lang=c
 *
 * [5] Longest Palindromic Substring
 *
 * https://leetcode.com/problems/longest-palindromic-substring/description/
 *
 * algorithms
 * Medium (27.35%)
 * Total Accepted:    566K
 * Total Submissions: 2.1M
 * Testcase Example:  '"babad"'
 *
 * Given a string s, find the longest palindromic substring in s. You may
 * assume that the maximum length of s is 1000.
 *
 * Example 1:
 *
 *
 * Input: "babad"
 * Output: "bab"
 * Note: "aba" is also a valid answer.
 *
 *
 * Example 2:
 *
 *
 * Input: "cbbd"
 * Output: "bb"
 *
 *
 */


/*
 *     char * longestPalindrome(char * s){
 *
 *     }
 *
 */



char* longestPalindrome(char* s) {
    if(!s[0])
        return s;
    int length = strlen(s);
    int max_length = 1;
    int max_i = 0;
    int k = 0;
    
    while(k<length)
    {
        int i=k; 
        int j=k;
        while(j<length-1 && s[j] == s[j+1]) j++;
        k = j+1;
        while(j<length-1 && i>0 && s[i-1] == s[j+1])
        {
            j++;
            i--;
        }
        if(j-i+1 >= max_length)
        {
            max_length = j-i+1;
            max_i = i;
        }
    }
    
    char* p = (char *)malloc((max_length+1)*sizeof(char));
    memcpy(p, &s[max_i], max_length);
    p[max_length] = '\0';
    return p;
}

```
