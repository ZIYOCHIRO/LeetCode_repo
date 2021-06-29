/*
 * @lc app=leetcode id=942 lang=cpp
 *
 * [942] DI String Match
 */

// @lc code=start
class Solution {
public:
    vector<int> diStringMatch(string s) {
        int countI = 0, countD = s.size();
        vector<int> res;
        for (int i = 0; i<s.size(); i++) {
            if (s[i] == 'I') {
                res.push_back(countI);
                countI++;
            } else {
                res.push_back(countD);
                countD--;
            }
        }
        res.push_back(countI);
        return res;
    }
};
// @lc code=end

