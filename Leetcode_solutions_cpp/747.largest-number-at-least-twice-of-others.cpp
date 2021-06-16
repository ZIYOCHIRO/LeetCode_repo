/*
 * @lc app=leetcode id=747 lang=cpp
 *
 * [747] Largest Number At Least Twice of Others
 */

// @lc code=start
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return 0;
        int maxNumber = 0, maxIndex = -1;
        for (int i = 0; i < n; i++) {
            if (nums[i] > maxNumber) {
                maxNumber = nums[i];
                maxIndex = i;
            }
        }
        sort(nums.begin(), nums.end());
        if (nums[n-2] * 2 <= maxNumber) {
            return maxIndex;
        }
        
        return -1;
    }
};
// @lc code=end

