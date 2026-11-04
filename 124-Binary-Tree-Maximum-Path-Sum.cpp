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
    int calculatemaxPathsum(TreeNode*& root, int& r) {
        if (root == nullptr) {
            return 0;
        }
        int left = max(0, calculatemaxPathsum(root->left, r));
        int right = max(0, calculatemaxPathsum(root->right, r));
        r = max(r, root->val + left + right);
        return root->val + max(left, right);
    }
    int maxPathSum(TreeNode* root) {
        int Maxsum = INT_MIN;
        calculatemaxPathsum(root, Maxsum);
        return Maxsum;
    }
};
