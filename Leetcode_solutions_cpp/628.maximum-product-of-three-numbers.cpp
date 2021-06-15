/*
 * @lc app=leetcode id=628 lang=cpp
 *
 * [628] Maximum Product of Three Numbers
 */

// @lc code=start
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());  //先排序
        int n = nums.size();
        // 1.数组全是正数，[0,1,3,7,9]  3*7*9
        // 2.数组全是负数，[-9,-4,-2,-1] -4*-2*-1
        // 3.数组有正有负，[-9,-4,0,1,3] -9*-4*3
        return max(nums[0] * nums[1] * nums[n-1], nums[n-1] * nums[n-2] * nums[n-3]);
    }
};
// @lc code=end

