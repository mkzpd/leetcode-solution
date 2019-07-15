```
/*
 * @lc app=leetcode id=28 lang=c
 *
 * [28] Implement strStr()
 *
 * https://leetcode.com/problems/implement-strstr/description/
 *
 * algorithms
 * Easy (32.08%)
 * Total Accepted:    433.3K
 * Total Submissions: 1.4M
 * Testcase Example:  '"hello"\n"ll"'
 *
 * Implement strStr().
 *
 * Return the index of the first occurrence of needle in haystack, or -1 if
 * needle is not part of haystack.
 *
 * Example 1:
 *
 *
 * Input: haystack = "hello", needle = "ll"
 * Output: 2
 *
 *
 * Example 2:
 *
 *
 * Input: haystack = "aaaaa", needle = "bba"
 * Output: -1
 *
 *
 * Clarification:
 *
 * What should we return when needle is an empty string? This is a great
 * question to ask during an interview.
 *
 * For the purpose of this problem, we will return 0 when needle is an empty
 * string. This is consistent to C's strstr() and Java's indexOf().
 *
 */


/*
 *   int strStr(char * haystack, char * needle){
 *
 *   }
 */




int strStr(char *haystack, char *needle)
{
    int hlen = strlen(haystack), nlen = strlen(needle);
    // in case if needle is empty, return 0 regardless of haystack
    if (!nlen)
    {
        return 0;
    }
    // else if haystack is empty or the length of haystack is shorter than needle, return -1
    if (!hlen || hlen < nlen)
    {
        return -1;
    }

    // iterate over haystack, compare substring starting at each character of it
    // NOTE: here hlen - nlen can save us a lot of times
    for (int i = 0; i <= hlen - nlen; i++)
    {
        int m = i; // next character in haystack to compare with needle
        int n = 0; // next character in needle to compare with haystack
        while (m < hlen && n < nlen && haystack[m] == needle[n])
        {
            m++;
            n++;
        }
        // check if every character of needle has been matched
        if (!needle[n])
        {
            return i;
        }
    }
    return -1; // not found
}
```
