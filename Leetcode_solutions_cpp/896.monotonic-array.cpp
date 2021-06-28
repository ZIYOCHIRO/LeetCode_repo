/*
 * @lc app=leetcode id=896 lang=cpp
 *
 * [896] Monotonic Array
 */

// @lc code=start
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
         unordered_set<int>map;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i+1] > nums[i]) {
                if (map.count(1)) {
                    
                } else {
                    map.insert(1);
                }
            } else if (nums[i+1] < nums[i]) {
                if (map.count(-1)) {
                    
                } else {
                    map.insert(-1);
                }
            }
            if (map.size() > 1) {
                return false;
            }
        }
        return map.size() <= 1;
    }
};
// @lc code=end

