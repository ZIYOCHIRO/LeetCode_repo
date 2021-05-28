/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1, j = n-1, s = m+n-1;
        while (i >= 0 && j >=0) {
            if (nums1[i] >= nums2[j]) {
                nums1[s] = nums1[i];
                i--;
            } else {
                nums1[s] = nums2[j];
                j--;
            }
            s--;
        }
        while (j >= 0) {
            nums1[s] = nums2[j];
            j--;
            s--;
        }
    }
};
// @lc code=end

