/*
 * @lc app=leetcode id=1032 lang=c
 *
 * [1032] Stream of Characters
 *
 * https://leetcode.com/problems/stream-of-characters/description/
 *
 * algorithms
 * Hard (40.96%)
 * Total Accepted:    4.8K
 * Total Submissions: 11.6K
 * Testcase Example:  '["StreamChecker","query","query","query","query","query","query","query","query","query","query","query","query"]\n[[["cd","f","kl"]],["a"],["b"],["c"],["d"],["e"],["f"],["g"],["h"],["i"],["j"],["k"],["l"]]'
 *
 * Implement the StreamChecker class as follows:
 * 
 * 
 * StreamChecker(words): Constructor, init the data structure with the given
 * words.
 * query(letter): returns true if and only if for some k >= 1, the last k
 * characters queried (in order from oldest to newest, including this letter
 * just queried) spell one of the words in the given list.
 * 
 * 
 * 
 * 
 * Example:
 * 
 * 
 * StreamChecker streamChecker = new StreamChecker(["cd","f","kl"]); // init
 * the dictionary.
 * streamChecker.query('a');          // return false
 * streamChecker.query('b');          // return false
 * streamChecker.query('c');          // return false
 * streamChecker.query('d');          // return true, because 'cd' is in the
 * wordlist
 * streamChecker.query('e');          // return false
 * streamChecker.query('f');          // return true, because 'f' is in the
 * wordlist
 * streamChecker.query('g');          // return false
 * streamChecker.query('h');          // return false
 * streamChecker.query('i');          // return false
 * streamChecker.query('j');          // return false
 * streamChecker.query('k');          // return false
 * streamChecker.query('l');          // return true, because 'kl' is in the
 * wordlist
 * 
 * 
 * 
 * 
 * Note:
 * 
 * 
 * 1 <= words.length <= 2000
 * 1 <= words[i].length <= 2000
 * Words will only consist of lowercase English letters.
 * Queries will only consist of lowercase English letters.
 * The number of queries is at most 40000.
 * 
 * 
 */



typedef struct {
    
} StreamChecker;


StreamChecker* streamCheckerCreate(char ** words, int wordsSize) {
    
}

bool streamCheckerQuery(StreamChecker* obj, char letter) {
  
}

void streamCheckerFree(StreamChecker* obj) {
    
}

/**
 * Your StreamChecker struct will be instantiated and called as such:
 * StreamChecker* obj = streamCheckerCreate(words, wordsSize);
 * bool param_1 = streamCheckerQuery(obj, letter);
 
 * streamCheckerFree(obj);
*/
