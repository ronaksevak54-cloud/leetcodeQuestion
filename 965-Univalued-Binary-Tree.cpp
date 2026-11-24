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
    void preordertraversal(TreeNode*& root, vector<int>& r) {
        if (root == nullptr) {
            return;
        }
        r.push_back(root->val);
        preordertraversal(root->left, r);
        preordertraversal(root->right, r);
    }
    bool isUnivalTree(TreeNode* root) {
        vector<int> r;
        preordertraversal(root, r);
        bool s=true;
        for(int i=1;i<r.size();i++){
            if(r[i-1]!=r[i]){
                s=false;
                break;
            }
        }
        return s;
    }
};