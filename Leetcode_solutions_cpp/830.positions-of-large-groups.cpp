/*
 * @lc app=leetcode id=830 lang=cpp
 *
 * [830] Positions of Large Groups
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> res;
        int sameCount = 1;
        for (int i = 0; i < s.size(); i++) {
            if (i == s.size() - 1 || s[i] != s[i + 1]) {
                if (sameCount >= 3) {
                    res.push_back({i - sameCount + 1, i});
                }
                sameCount = 1;
            } else {
                sameCount++;
            }
        }
        return res;
    }
};
// @lc code=end

