/*
 * @lc app=leetcode id=643 lang=cpp
 *
 * [643] Maximum Average Subarray I
 */

// @lc code=start
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ksum = accumulate(nums.begin(), nums.begin() + k, 0);
        double sum = ksum;
        for (int i = k; i < nums.size(); i++) {
            ksum += nums[i] - nums[i-k];
            sum = max(ksum,sum);
        }
        return sum/k;
    }
};
// @lc code=end

