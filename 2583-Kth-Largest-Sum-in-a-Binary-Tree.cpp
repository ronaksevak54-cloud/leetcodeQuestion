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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode*>r;
        r.push(root);
        vector<long long>s;
        while(!r.empty()){
            int a=r.size();
            long long  b=0;
            for(int i=0;i<a;i++){
                TreeNode* c=r.front();
                r.pop();
                if(c->left!=nullptr){
                    r.push(c->left);
                }
                if(c->right!=nullptr){
                    r.push(c->right);
                }
                b=b+c->val;
            }
            s.push_back(b);
        }
        sort(s.begin(),s.end());
        reverse(s.begin(),s.end());
        if(s.size()<k){
            return -1;
        }
        return s[k-1];
    }
};


