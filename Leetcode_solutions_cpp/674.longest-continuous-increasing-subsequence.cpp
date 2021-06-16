/*
 * @lc app=leetcode id=674 lang=cpp
 *
 * [674] Longest Continuous Increasing Subsequence
 */

// @lc code=start
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
         int res = 0, temp = 1;
        if (nums.size() <= 1) {return 1;}
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i-1]) {
                temp += 1;
                
            } else {
                temp = 1;
            }
            res = max(res, temp);
        }
        return res;
    }
};
// @lc code=end

