/*
 * @lc app=leetcode id=661 lang=cpp
 *
 * [661] Image Smoother
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int W = img.size();
        int L = img[0].size();
        
        //
        vector<vector<int>> v(W, vector<int>(L, -1));
        for (int i = 0; i<W*L; i++) {
            int cur_h = i/L;
            int cur_l = i%L;
            
            int x1 = cur_l, x2 = cur_l, y1 = cur_h, y2 = cur_h, sum = 0;
            if (cur_l-1>=0) x1 = cur_l-1;
            if (cur_l+1<L)  x2 = cur_l+1;
            if (cur_h-1>=0) y1 = cur_h-1;
            if (cur_h+1<W)  y2 = cur_h+1;
            
            for (int i = y1; i <=y2; i++) {
                for (int j = x1; j<=x2; j++) {
                    sum+=img[i][j];
                }
            }
            
            int count = (x2-x1+1)*(y2-y1+1);
            v[cur_h][cur_l] = sum/count;
            
        }
        
        return v;
    }
};
// @lc code=end

