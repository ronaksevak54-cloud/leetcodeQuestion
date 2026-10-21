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
    ListNode* partition(ListNode* head, int x) {
        if(head==nullptr){
            return nullptr;
        }
        vector<int>a;
        vector<int>b;
        ListNode* temp=head;
        while(temp!=nullptr){
            if(temp->val<x){
                a.push_back(temp->val);
            }
            else{
                b.push_back(temp->val);
            }
            temp=temp->next;
        }
        for(int i:b){
            a.push_back(i);
        }
        ListNode* r=new ListNode(a[0]);
        ListNode* s=r;
        for(int i=1;i<a.size();i++){
            ListNode* t=new ListNode(a[i]);
            s->next=t;
            s=t;
        }
        return r;
    }
};