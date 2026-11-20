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
    void findkthSmallest(TreeNode*& root, vector<int>& r, int j) {
        if (root == nullptr) {
            return;
        }
        findkthSmallest(root->left, r, j);
        r.push_back(root->val);
        findkthSmallest(root->right, r, j);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> r;
        findkthSmallest(root, r, k);
        return r[k - 1];
    }
};