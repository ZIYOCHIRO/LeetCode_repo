/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> temp;
        for (int n:nums) {
            if (temp.find(n) != temp.end()) {
                return true;
            }else {
                temp.insert(n);
            }
        }
        return false;
    }
};
// @lc code=end

