/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        set<int>countSet;
        int currentCount = 0;
        for (int val:nums) {
            if (val) {
                currentCount++;
            } else {
                countSet.insert(currentCount);
                currentCount = 0;
            }
        }
        
        countSet.insert(currentCount);
        return *(countSet.rbegin());
    }
};
// @lc code=end

