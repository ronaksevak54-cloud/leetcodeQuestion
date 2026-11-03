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
void   leafsimilar1(TreeNode* &root1,vector<int>&r){
    if(root1==nullptr){
        return;
    }
    if(root1->left==nullptr && root1->right==nullptr){
        r.push_back(root1->val);
    }
    leafsimilar1(root1->left,r);
    leafsimilar1(root1->right,r);
}
void  leafsimilar2(TreeNode* &root2,vector<int>&s){
    if(root2==nullptr){
        return;
    }
     if(root2->left==nullptr && root2->right==nullptr){
        s.push_back(root2->val);
    }
    leafsimilar1(root2->left,s);
    leafsimilar1(root2->right,s);

}
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>a;
        vector<int>b;
        leafsimilar1(root1,a);
        leafsimilar2(root2,b);
        if(a==b){
            return true;
        }
        return false;
    }
};