```
/*
 * @lc app=leetcode id=38 lang=c
 *
 * [38] Count and Say
 *
 * https://leetcode.com/problems/count-and-say/description/
 *
 * algorithms
 * Easy (40.61%)
 * Total Accepted:    285.7K
 * Total Submissions: 703.4K
 * Testcase Example:  '1'
 *
 * The count-and-say sequence is the sequence of integers with the first five
 * terms as following:
 *
 *
 * 1.     1
 * 2.     11
 * 3.     21
 * 4.     1211
 * 5.     111221
 *
 *
 * 1 is read off as "one 1" or 11.
 * 11 is read off as "two 1s" or 21.
 * 21 is read off as "one 2, then one 1" or 1211.
 *
 * Given an integer n where 1 ≤ n ≤ 30, generate the n^th term of the
 * count-and-say sequence.
 *
 * Note: Each term of the sequence of integers will be represented as a
 * string.
 *
 *
 *
 * Example 1:
 *
 *
 * Input: 1
 * Output: "1"
 *
 *
 * Example 2:
 *
 *
 * Input: 4
 * Output: "1211"
 *
 */


/*
 *   char * countAndSay(int n){
 *
 *   }
 *
 */






char* change(char *ret){
    char *ret_temp=(char*)malloc(sizeof(char)*5000);
    int count=1;
    char flag=ret[0];
    int j=0;
    int bug=0;
    for(int i=1;i<strlen(ret);i++){
        if(flag==ret[i]){count++;}
        else{
            j += sprintf(ret_temp + j,"%d%c", count,flag);
            flag=ret[i];
            count=1;
        }
    }
    sprintf(ret_temp + j, "%d%c", count,flag);
    free(ret);
    return ret_temp;
}
char* countAndSay(int n) {
    char *ret=(char*)malloc(sizeof(char)*5000);
    ret[0]='1';
    ret[1]='\0';
    for(int i=1;i<n;i++){ret=change(ret);}
    return ret;
}

```
