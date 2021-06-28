/*
 * @lc app=leetcode id=922 lang=cpp
 *
 * [922] Sort Array By Parity II
 */

// @lc code=start
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>odd, even, res;
        for (int n: nums) {
            if (n % 2 == 0) {
                even.push_back(n);
            } else {
                odd.push_back(n);
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                // 从even数组里取
                res.push_back(even[0]);
                even.erase(even.begin());
            } else {
                // 从odd数组里取
                res.push_back(odd[0]);
                odd.erase(odd.begin());
            }
        }
        return res;
    }
};
// @lc code=end

