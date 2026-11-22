/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void traversal(TreeNode* &root, stack<TreeNode*> &s) {
        while (root) {
            s.push(root);
            root = root->left;
        }
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> r;
        stack<TreeNode*> a;
        stack<TreeNode*> b;
        traversal(root1, a);
        traversal(root2, b);
        while (!a.empty() || !b.empty()) {
            if (a.empty() && !b.empty()) {
                TreeNode* temp = b.top();
                b.pop();
                r.push_back(temp->val);
                if (temp->right) {
                    traversal(temp->right, b);
                }
            }else if (!a.empty() && b.empty()) {
                TreeNode* temp2 = a.top();
                a.pop();
                r.push_back(temp2->val);
                if (temp2->right) {
                    traversal(temp2->right, a);
                }
            }else if (a.top()->val < b.top()->val) {
                TreeNode* temp2 = a.top();
                a.pop();
                r.push_back(temp2->val);
                if (temp2->right) {
                    traversal(temp2->right, a);
                }
            } else if (b.top()->val <= a.top()->val) {
                TreeNode* temp = b.top();
                b.pop();
                r.push_back(temp->val);
                if (temp->right) {
                    traversal(temp->right, b);
                }
            }
        }
        return r;
    }
};