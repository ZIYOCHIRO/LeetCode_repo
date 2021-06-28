/*
 * @lc app=leetcode id=905 lang=cpp
 *
 * [905] Sort Array By Parity
 */

// @lc code=start
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
         vector<int> res, odd;
        for (int n: nums) {
            if (n%2 == 0) {
                // even
                res.push_back(n);
            } else {
                // odd
                odd.push_back(n);
            }
        }
        
        for (int m: odd) {
            res.push_back(m);
        }
        return res;
    }
};
// @lc code=end

