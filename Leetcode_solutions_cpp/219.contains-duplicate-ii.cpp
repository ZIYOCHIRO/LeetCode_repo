/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> existed;
        int n = (int)nums.size();
        int cur = 0;
        for (int i = 0; i < n; i++) {
            cur = nums[i];
            // 找到了，直接return true
            if (existed.find(cur) != existed.end()) {
                return true;
            } else {
                existed.insert(cur);
                if (existed.size() > k) {
                    existed.erase(nums[i-k]);
                }
            }
        }
        return false;
    }
};
// @lc code=end

