/*
 * @lc app=leetcode id=350 lang=cpp
 *
 * [350] Intersection of Two Arrays II
 */

// @lc code=start
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int>res;
        while (nums1.size() > 0 && nums2.size() > 0) {
            if (nums1[0] == nums2[0]) {
                res.push_back(nums1[0]);
                nums2.erase(nums2.begin());
                nums1.erase(nums1.begin());
            } else {
                if (nums1[0] > nums2[0]) {
                    // 删除nums2[0]
                    nums2.erase(nums2.begin());
                } else {
                    nums1.erase(nums1.begin());
                    // 删除nums1[0]
                }
            }
        }
        return res;
    }
};
// @lc code=end

