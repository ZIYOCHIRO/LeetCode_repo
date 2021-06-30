/*
 * @lc app=leetcode id=771 lang=cpp
 *
 * [771] Jewels and Stones
 */

// @lc code=start
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int jewelCount = 0;
        int jewelLength = jewels.length();
        int stoneLength = stones.length();
        for (int i = 0; i < stoneLength; i++) {
            for (int j = 0; j < jewelLength; j++) {
                if (stones[i] == jewels[j]) {
                    jewelCount++;
                    break;
                }
            }
        }
        return jewelCount;
    }
};
// @lc code=end

