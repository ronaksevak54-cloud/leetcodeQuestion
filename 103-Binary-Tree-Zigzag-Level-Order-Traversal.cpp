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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>r;
        if(root==nullptr){
            return r;
        }
        queue<TreeNode*>s;
        s.push(root);
        bool lefttoright=true;
        while(!s.empty()){
            int k=s.size();
            vector<int>m(k);
            for(int i=0;i<k;i++){
                TreeNode* y=s.front();
                s.pop();
                if(y->left!=nullptr){
                    s.push(y->left);
                }
                if(y->right!=nullptr){
                    s.push(y->right);
                }
                int index;
                if( lefttoright==true){
                    index=i;
                }
                else{
                    index=k-1-i;
                }
                m[index]=y->val;
            }
            lefttoright=!lefttoright;
            r.push_back(m);
        }
        return r;
    }
};