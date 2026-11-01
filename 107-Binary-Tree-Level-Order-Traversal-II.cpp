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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>r;
        if(root==nullptr){
            return r;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>s;
            int a=q.size();
            for(int i=0;i<a;i++){
                TreeNode* c=q.front();
                q.pop();
                if(c->left!=nullptr){
                    q.push(c->left);
                }
                if(c->right!=nullptr){
                    q.push(c->right);
                }
                s.push_back(c->val);
            }
            r.push_back(s);
        }
        reverse(r.begin(),r.end());
        return r;
    }
};