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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==nullptr){
            TreeNode* a=new TreeNode(val);
            return a;
        }
        TreeNode* curr=root;
        while(curr){
            if(val<curr->val){
                if(curr->left==nullptr){
                    TreeNode* b=new TreeNode(val);
                    curr->left=b;
                    break;
                }
                curr=curr->left;
            }
            else{
                if(curr->right==nullptr){
                    TreeNode* c=new TreeNode(val);
                    curr->right=c;
                    break;
                }
                curr=curr->right;
            }
        }
        return root;
    }
};