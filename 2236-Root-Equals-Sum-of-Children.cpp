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
void  traversal(TreeNode*&root,vector<int>&s){
    if(root==nullptr){
        return;
    }
    s.push_back(root->val);
    traversal(root->left,s);
    traversal(root->right,s);
}
    bool checkTree(TreeNode* root) {
        bool r=false;
        vector<int>s;
        traversal(root,s);
        int m=s[0];
        int k=s[1];
        int j=s[2];
        if(m==k+j){
            r=true;
        }
        return r;
    }
};