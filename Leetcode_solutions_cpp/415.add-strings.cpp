/*
 * @lc app=leetcode id=415 lang=cpp
 *
 * [415] Add Strings
 */

// @lc code=start
class Solution {
public:
    string addStrings(string num1, string num2) {
        string res = "";
        int i = num1.length() - 1;
        int j = num2.length() - 1;
        int add = 0;
        while (i >= 0 || j >= 0 || add != 0) {
            int a = i >= 0 ? num1[i] - '0':0;
            int b = j >= 0 ? num2[j] - '0':0;
            res.push_back((a + b + add) % 10 + '0');
            add = int((a + b + add) / 10);
            i--;
            j--;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
// @lc code=end

