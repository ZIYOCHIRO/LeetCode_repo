/*
 * @lc app=leetcode id=409 lang=cpp
 *
 * [409] Longest Palindrome
 */

// @lc code=start
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int,int> map;
        int res = 0, hasOdd = 0;
        for (char ch: s) {
            map[ch]++;
        }
        for (auto&[_, count]:map) {
            if (count%2 == 0) {
                res += count;
            } else {
                res += count - 1;
                if (hasOdd != 1) {
                    hasOdd = 1;
                }
            }
            
        }
        
        return res + hasOdd;
    }
};
// @lc code=end

