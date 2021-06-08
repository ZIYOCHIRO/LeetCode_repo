/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input array is sorted
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = (int)numbers.size();
        vector<int>res;
        for (int i = 0; i < n; i++) {
            int low = i + 1, high = n - 1;
            while (low <= high) {
                int mid = (high - low)/2 + low;
                if (numbers[mid] ==  target - numbers[i]) {
                    return {i+1, mid+1};
                } else if (numbers[mid] > target - numbers[i]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
        }
        return {-1, -1};
    }
};
// @lc code=end

