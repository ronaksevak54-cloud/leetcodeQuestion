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
void checkBST(TreeNode* &root,vector<int>&r){
    if(root==nullptr){
        return;
    }
    checkBST(root->left,r);
    r.push_back(root->val);
    checkBST(root->right,r);
}
    bool isValidBST(TreeNode* root) {
        vector<int>r;
        checkBST(root,r);
        bool s=false;
        for(int i=1;i<r.size();i++){
            if(r[i-1]==r[i]){
                return false;
            }
        }
        vector<int>b;
        for(int i:r){
            b.push_back(i);
        }
        sort(r.begin(),r.end());
        if(r==b){
            s=true;
        }
        return s;
    }
};