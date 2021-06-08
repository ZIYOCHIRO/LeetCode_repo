/*
 * @lc app=leetcode id=168 lang=cpp
 *
 * [168] Excel Sheet Column Title
 */

// @lc code=start
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res = "";
        while (columnNumber > 0) {
            columnNumber-=1;
            char temp = 'A' + columnNumber%26;
            res += temp;
            columnNumber /= 26;
            
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
// @lc code=end

