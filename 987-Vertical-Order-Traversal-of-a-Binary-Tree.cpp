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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>r;
        queue<pair<TreeNode*,pair<int,int>>>s;
        s.push({root,{0,0}});
        while(!s.empty()){
            auto it=s.front();
            s.pop();
            TreeNode* m=it.first;
            int k=it.second.first;
            int j=it.second.second;
            r[k][j].insert(m->val);
            if(m->left!=nullptr){
                s.push({m->left,{k-1,j+1}});
            }
            if(m->right!=nullptr){
                s.push({m->right,{k+1,j+1}});
            }
        }
        vector<vector<int>>g;
        for(auto i:r){
            vector<int>a;
            for(auto i:i.second){
                for(auto i:i.second){
                    a.push_back(i);
                }
            }
            g.push_back(a);
        }
        return g;
    }
};