/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
                /*  暴力循环法，超时了
        // 第二个数字 > 第一个数字
        int n = (int)prices.size(), res = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                res = max(res, prices[j] - prices[i]);
            }
        }
        return res;
        */
        
        
        // 换种方法
        // 计划在第i天卖出股票，那么最大利润的差值一定在[0, i-1] 之间选最低点买入
        int minPrice = INT_MAX, maxProfit = 0;
        for (int price: prices) {
            maxProfit = max(maxProfit, price - minPrice);
            minPrice = min(price, minPrice);
        }
        return maxProfit;
    }
};
// @lc code=end

