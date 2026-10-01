/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>a;
        ListNode* temp=head;
        while(temp!=nullptr){
            a.push_back(temp->val);
            temp=temp->next;
        }
        stack<int>b;
        vector<int>r(a.size());
        for(int i=a.size()-1;i>=0;i--){
            while(!b.empty() && a[i]>=b.top()){
                b.pop();
            }
            if(b.empty()){
                r[i]=0;
            }
            else{
                r[i]=b.top();
            }
            b.push(a[i]);
        }
        return r;
    }
};