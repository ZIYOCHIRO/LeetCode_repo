/*
 * @lc app=leetcode id=111 lang=cpp
 *
 * [111] Minimum Depth of Binary Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        
        if (root->left == nullptr && root->right == nullptr) {
            return 1;
        }
        
        int res = INT_MAX;
        if (root->left != nullptr) {
            res = min(minDepth(root->left), res);
        }
        if (root->right != nullptr) {
            res = min(minDepth(root->right), res);
        }
        return res + 1;
    }
};
// @lc code=end

