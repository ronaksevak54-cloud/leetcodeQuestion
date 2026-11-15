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
    int findSecondMinimumValue(TreeNode* root) {
        queue<TreeNode*>r;
        vector<int>s;
        r.push(root);
        while(!r.empty()){
            int a=r.size();
            for(int i=0;i<a;i++){
                TreeNode* c=r.front();
                r.pop();
                if(c->left!=nullptr){
                    r.push(c->left);
                }
                if(c->right!=nullptr){
                    r.push(c->right);
                }
                s.push_back(c->val);
            }
        }
        sort(s.begin(),s.end());
        set<int>z;
        for(int i:s){
            z.insert(i);
        }
        vector<int>x;
        for(int i:z){
            x.push_back(i);
        }
        if(x.size()==1){
            return -1;
        }
        return x[1];
    }
};