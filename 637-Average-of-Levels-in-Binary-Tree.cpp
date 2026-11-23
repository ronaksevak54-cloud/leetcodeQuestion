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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>z;
        if(root==nullptr){
            return z;
        }
        queue<TreeNode*>r;
        r.push(root);
        while(!r.empty()){
            double s=0;
            int t=r.size();
            for(int i=0;i<t;i++){
                TreeNode* u=r.front();
                r.pop();
                if(u->left!=nullptr){
                    r.push(u->left);
                }
                if(u->right!=nullptr){
                    r.push(u->right);
                }
                s=s+u->val;
            }
            z.push_back(double(s/t));
        }
        return z;
    }
};