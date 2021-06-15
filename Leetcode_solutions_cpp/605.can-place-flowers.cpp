/*
 * @lc app=leetcode id=605 lang=cpp
 *
 * [605] Can Place Flowers
 */

// @lc code=start
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
       int count = flowerbed.size();
        for(int i = 0; i < count; i++)
        {
            if(flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == count -1 || flowerbed[i + 1] == 0))
            {
               n--;
               if(n <= 0) return true;
               flowerbed[i] = 1;
            }
        }
        return n <= 0;
    }
};
// @lc code=end

