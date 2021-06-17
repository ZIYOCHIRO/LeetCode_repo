/*
 * @lc app=leetcode id=832 lang=cpp
 *
 * [832] Flipping an Image
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int R = image.size();
        int C = image[0].size();
        
        vector<vector<int>> res;
        for (auto tem:image) {
            vector<int>Rtemp;
            for (int i= 0; i < C; i++) {
                Rtemp.push_back(tem[C-i-1] == 1 ? 0:1);
            }
            res.push_back(Rtemp);
            
        }
        return res;
    }
};
// @lc code=end

