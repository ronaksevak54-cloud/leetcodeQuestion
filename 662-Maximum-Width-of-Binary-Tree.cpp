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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,int>>r;
        int s=0;
        r.push({root,0});
        while(!r.empty()){
            int a=r.size();
            int mmin=r.front().second;
            int first;
            int last;
            for(int i=0;i<a;i++){
                long long curr=r.front().second-mmin;
                TreeNode* t=r.front().first;
                r.pop();
                if(i==0){
                    first=curr;
                }
                if(i==a-1){
                    last=curr;
                }
                if(t->left!=nullptr){
                    r.push({t->left,2LL*curr+1});
                }
                if(t->right!=nullptr){
                    r.push({t->right,2LL*curr+2});
                }
            }
            s=max(s,last-first+1);
        }
        return s;
    }
};