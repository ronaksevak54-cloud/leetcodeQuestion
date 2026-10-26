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
void postorderTraversal2(vector<int>&s,TreeNode* k){
    if(k==nullptr){
        return;
    }
    postorderTraversal2(s,k->left);
    postorderTraversal2(s,k->right);
    s.push_back(k->val);
}
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>r;
        postorderTraversal2(r,root);
        return r;
    }
};