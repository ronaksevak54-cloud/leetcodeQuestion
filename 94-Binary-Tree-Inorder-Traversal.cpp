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
    void inorderTraversal1(vector<int>&s,TreeNode* k){
        if(k==nullptr){
            return;
        }
        inorderTraversal1(s,k->left);
        s.push_back(k->val);
        inorderTraversal1(s,k->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> r;
        inorderTraversal1(r, root);
        return r;
    }
};
