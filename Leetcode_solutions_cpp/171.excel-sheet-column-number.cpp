/*
 * @lc app=leetcode id=171 lang=cpp
 *
 * [171] Excel Sheet Column Number
 */

// @lc code=start
class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long res=0;
        for (char c:columnTitle) {
            int temp = c - 'A' + 1;
                res = res * 26 + temp;
        }
        return res;
    }
};
// @lc code=end

