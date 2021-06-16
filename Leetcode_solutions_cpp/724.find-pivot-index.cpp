/*
 * @lc app=leetcode id=724 lang=cpp
 *
 * [724] Find Pivot Index
 */

// @lc code=start
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = accumulate(nums.begin(), nums.end(), 0);
        int sum = 0;
        for (int i = 0; i<nums.size(); i++) {
            if (sum *2 + nums[i] == totalSum) {
                return i;
            }
            sum += nums[i];
        }
        return -1;
    }
};
// @lc code=end

