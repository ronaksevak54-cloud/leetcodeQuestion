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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>r;
        if(root==nullptr){
            return r;
        }
        queue<TreeNode*>s;
        s.push(root);
        while(!s.empty()){
            int a=s.size();
            vector<int>c;
            for(int i=0;i<a;i++){
                TreeNode* b=s.front();
                s.pop();
                if(b->left!=nullptr){
                    s.push(b->left);
                }
                if(b->right!=nullptr){
                    s.push(b->right);
                }
                c.push_back(b->val);
            }
            r.push_back(c);
        }
        return r;
    }
};