```
/*
 * @lc app=leetcode id=17 lang=c
 *
 * [17] Letter Combinations of a Phone Number
 *
 * https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/
 *
 * algorithms
 * Medium (41.69%)
 * Total Accepted:    394.1K
 * Total Submissions: 945.3K
 * Testcase Example:  '"23"'
 *
 * Given a string containing digits from 2-9 inclusive, return all possible
 * letter combinations that the number could represent.
 *
 * A mapping of digit to letters (just like on the telephone buttons) is given
 * below. Note that 1 does not map to any letters.
 *
 *
 *
 * Example:
 *
 *
 * Input: "23"
 * Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].
 *
 *
 * Note:
 *
 * Although the above answer is in lexicographical order, your answer could be
 * in any order you want.
 *
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** letterCombinations(char * digits, int* returnSize){

}





char map[10][4] = {
    {' ', ' ', ' ', ' '}, //0
    {' ', ' ', ' ', ' '}, //1
    {'a', 'b', 'c', ' '}, //2
    {'d', 'e', 'f', ' '}, //3
    {'g', 'h', 'i', ' '}, //4
    {'j', 'k', 'l', ' '}, //5
    {'m', 'n', 'o', ' '}, //6
    {'p', 'q', 'r', 's'}, //7
    {'t', 'u', 'v', ' '}, //8
    {'w', 'x', 'y', 'z'}  //9
};

void letterComb(char* digits, int* returnSize, char *result, int ind, char **ans)
{
    int i = 0;
    char c;
    char *letter = map[*digits - '0'];

    if (*digits == 0) {
        char *res = (char *)malloc(strlen(result) + 1);
        strcpy(res, result);
        ans[(*returnSize)] = res;
        (*returnSize)++;
        return;
    }

    while ((c = letter[i]) != ' ') {
        result[ind] = c;
        letterComb(digits + 1, returnSize, result, ind + 1, ans);
        i++;
        if (i == 4)
            break;
    }
    return;
}

char** letterCombinations(char* digits, int* returnSize) {
    
    int ind = 0, size = 0;
    int len = strlen(digits) + 1;
    char result[len];
    
    if (digits == NULL || strlen(digits) == 0){
        *returnSize = size;
        return NULL;
    }
  
    char **ans = (char **) malloc(sizeof (char *) * 32768);
        
    memset(result, 0, len);
    
    letterComb(digits, &size, result, ind, ans);
    *returnSize = size;
    
    return ans;
}

```
