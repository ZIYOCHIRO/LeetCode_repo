/*
 * @lc app=leetcode id=914 lang=cpp
 *
 * [914] X of a Kind in a Deck of Cards
 */

// @lc code=start
class Solution {
    int cnt[10000];
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        for (auto x: deck) cnt[x]++;
        int g = -1;
        for (int i = 0; i < 10000; ++i) {
            if (cnt[i]) {
                if (~g) {
                    g = gcd(g, cnt[i]);
                } else {
                    g = cnt[i];
                }
            }
        }
        return g >= 2;

    }
};
// @lc code=end

