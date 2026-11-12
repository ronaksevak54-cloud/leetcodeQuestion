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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>r;
        vector<int>s;
        r.push(root);
        while(!r.empty()){
            int d=r.size();
            int sum=0;
            for(int i=0;i<d;i++){
                TreeNode* e=r.front();
                r.pop();
                if(e->left!=nullptr){
                    r.push(e->left);
                }
                if(e->right!=nullptr){
                    r.push(e->right);
                }
                sum=sum+e->val;
            }
            s.push_back(sum);
        }
        int Max=INT_MIN;
        for(int i=0;i<s.size();i++){
            Max=max(Max,s[i]);
        }
        int y;
        for(int i=0;i<s.size();i++){
            if(Max==s[i]){
                y=i;
                break;
            }
        }
        return y+1;
    }
};