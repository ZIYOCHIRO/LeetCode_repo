/*
 * @lc app=leetcode id=344 lang=cpp
 *
 * [344] Reverse String
 */

// @lc code=start
class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> temp = s;
        
        for (int i = 0; i < int(s.size()/2 + 1); i++) {
            s[i] = temp[s.size()-i-1];
            s[s.size()-i-1] = temp[i];
        }
    }
};
// @lc code=end

