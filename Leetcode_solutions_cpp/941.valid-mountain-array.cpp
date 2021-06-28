/*
 * @lc app=leetcode id=941 lang=cpp
 *
 * [941] Valid Mountain Array
 */

// @lc code=start
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if (arr.size() <=1 ) {
            return false;
        }
        bool isTurningPoint = false;
        
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] - arr[i-1] == 0) {
                return false;
            }
            if (arr[i] - arr[i-1] < 0 && !isTurningPoint) {
                isTurningPoint = true;
                if (i<=1) return false;
            }
            
            if (arr[i] - arr[i-1] < 0 && !isTurningPoint) {
                return false;
            }
            
            if (arr[i] - arr[i-1] > 0 && isTurningPoint) {
                return false;
            }
        }
        if (!isTurningPoint) {
            return  false;
        }
        return true;
    }
};
// @lc code=end

