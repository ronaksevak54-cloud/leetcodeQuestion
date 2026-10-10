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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int>r;
        ListNode* temp=head;
        while(temp!=nullptr){
            r.push_back(temp->val);
            temp=temp->next;
        }
        int a=k-1;
        int b=r.size()-k;
        swap(r[a],r[b]);
        ListNode* s=new ListNode(r[0]);
        ListNode* m=s;
        for(int i=1;i<r.size();i++){
            ListNode* n=new ListNode(r[i]);
            m->next=n;
            m=n;
        }
        return s;
    }
};