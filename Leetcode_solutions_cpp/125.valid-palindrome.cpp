/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        string pStr;
        for (char c:s) {
            if (isalnum(c)) {
                pStr += tolower(c);
            }
        }
        string pStr_rev(pStr.rbegin(), pStr.rend());
        return pStr == pStr_rev;
    }
};
// @lc code=end

