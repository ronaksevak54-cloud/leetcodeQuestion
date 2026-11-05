/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> r;
        int val = 0;
        findrightview(root, val, r);
        return r;
    }
    void findrightview(TreeNode*& root, int k, vector<int>& s) {
        if (root == nullptr) {
            return;
        }
        if (k == s.size()) {
            s.push_back(root->val);
        }
        findrightview(root->right, k + 1,s);
        findrightview(root->left, k + 1,s);
    }
};