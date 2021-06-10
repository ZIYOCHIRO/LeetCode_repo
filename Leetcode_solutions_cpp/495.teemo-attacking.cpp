/*
 * @lc app=leetcode id=495 lang=cpp
 *
 * [495] Teemo Attacking
 */

// @lc code=start
class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n = timeSeries.size();
        if (n == 0) return 0;
        int total = 0;
        for (int i = 1; i<n; i++) {
            total += min(timeSeries[i] - timeSeries[i-1], duration);
        }
        return total + duration;
    }
};
// @lc code=end

