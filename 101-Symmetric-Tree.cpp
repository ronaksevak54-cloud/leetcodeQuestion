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
    bool checksymmetric(TreeNode* r, TreeNode* s) {
        if (r == nullptr || s == nullptr) {
            return r == s;
        }
        return r->val == s->val && checksymmetric(r->left, s->right) &&
               checksymmetric(r->right, s->left);
    }
    bool isSymmetric(TreeNode* root) {
        return root == nullptr || checksymmetric(root->left, root->right);
    }
};