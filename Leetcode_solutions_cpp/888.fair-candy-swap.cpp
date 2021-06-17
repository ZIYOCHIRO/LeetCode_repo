/*
 * @lc app=leetcode id=888 lang=cpp
 *
 * [888] Fair Candy Swap
 */

// @lc code=start
class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA = accumulate(aliceSizes.begin(), aliceSizes.end(), 0), sumB = accumulate(bobSizes.begin(), bobSizes.end(), 0);
        for (int a: aliceSizes) {
            for (int b: bobSizes) {
                if ((sumA - a + b) * 2 == sumA + sumB) {
                    return {a, b};
                }
            }
        }
        
        return {-1, -1};
    }
};
// @lc code=end

