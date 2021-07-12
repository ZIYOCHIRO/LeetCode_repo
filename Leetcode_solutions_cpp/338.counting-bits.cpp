/*
 * @lc app=leetcode id=338 lang=cpp
 *
 * [338] Counting Bits
 */

// @lc code=start
class Solution {
public:
    int countOnes(int x) {
        int ones = 0;
        while (x > 0) {
            x &= (x - 1);
            ones++;
        }
        return ones;
    }
    vector<int> countBits(int n) {
         vector<int>res(n + 1);
        for (int i = 0; i <= n; i++) {
            res[i] = countOnes(i);
        }
        return res;
    }
};
// @lc code=end

