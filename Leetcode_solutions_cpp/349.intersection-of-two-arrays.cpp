/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         unordered_set<int>set1;
        vector<int>res;
        for (auto & a: nums1) {
            for (auto & b: nums2) {
                if (a == b) {
                    set1.insert(a);
                }
            }
        }
        
        for (auto & num: set1) {
            res.push_back(num);
        }
        return res;
    }
};
// @lc code=end

