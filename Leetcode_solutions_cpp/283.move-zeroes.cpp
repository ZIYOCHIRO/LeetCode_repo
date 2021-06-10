/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroCount = 0;
        vector<int>res;
        for (int val:nums) {
            if (val == 0) {
                zeroCount++;
            } else {
                res.push_back(val);
            }
        }
        
        for (int i = 0; i < zeroCount; i++) {
            res.push_back(0);
        }
        nums = res;
    }
};
// @lc code=end

