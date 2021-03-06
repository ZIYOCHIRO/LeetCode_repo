/*
 * @lc app=leetcode id=557 lang=cpp
 *
 * [557] Reverse Words in a String III
 */

// @lc code=start
class Solution {
public:
    string reverseWords(string s) {
        string res = "";
        int length = s.length();
        int i = 0;
        while (i < length) {
            int start = i;
            while (i < length && s[i] != ' ') {
                i++;
            }
            for (int p = start; p < i; p++) {
                res.push_back(s[start + i -1 - p]);
            }
            while (i < length && s[i] == ' ') {
                i++;
                res.push_back(' ');
            }
        }
        return res;
    }
};
// @lc code=end

