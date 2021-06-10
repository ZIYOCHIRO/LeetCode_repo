/*
 * @lc app=leetcode id=172 lang=cpp
 *
 * [172] Factorial Trailing Zeroes
 */

// @lc code=start
class Solution {
public:
    int trailingZeroes(int n) {
        int res = 0;
        // 只要n能被5整除，就+1
        // 有些数，可能会被5整除很多次 25 = 5 * 5；50 = 5 * 5 * 2
        if (n < 5) {
            return res;
        }
        for (int i = n; i >= 5; i--) {
            int tem = i;
            while (tem >= 5) {
                if (tem%5 == 0) {
                    res += 1;
                    tem /= 5;
                } else {
                    break;
                }
            }
        }
        return res;
    }
};
// @lc code=end

