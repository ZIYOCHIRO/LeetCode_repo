/*
 * @lc app=leetcode id=228 lang=cpp
 *
 * [228] Summary Ranges
 */

// @lc code=start
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        int start = 0;
        int end = 0;
        while (end < nums.size()) {
            if (end < nums.size()-1 &&nums[end+1] == nums[end] + 1) {
                end += 1;
            } else {
                string temp = to_string(nums[start]);
                if (start != end) {
                    // 添加->
                    temp += "->" + to_string(nums[end]);
                }
                res.push_back(temp);
                end += 1;
                start = end;
            }
        }
        return res;
    }
};
// @lc code=end

