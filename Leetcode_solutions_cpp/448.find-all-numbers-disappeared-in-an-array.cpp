/*
 * @lc app=leetcode id=448 lang=cpp
 *
 * [448] Find All Numbers Disappeared in an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
         int n = nums.size();
        vector<int>res;
        if (n <= 0) {
            return res;
        }
        
        for (int i = 0; i < n; ++i) {
            int currIndex = abs(nums[i])-1;
            if (nums[currIndex] > 0) {
                nums[currIndex] = -nums[currIndex];
            }
        }
        
        for (int i = 0; i < n ; i++) {
            if (nums[i] > 0) {
                res.push_back(i + 1);
            }
        }
        return res;
    }
};
// @lc code=end

