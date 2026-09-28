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
    ListNode* deleteDuplicates(ListNode* head) {
        set<int>a;
        if(head==nullptr){
            return nullptr;
        }
        ListNode* temp=head;
        while(temp!=nullptr){
            a.insert(temp->val);
            temp=temp->next;
        }
        vector<int>b;
        for(int i:a){
            b.push_back(i);
        }
        ListNode* r=new ListNode(b[0]);
        ListNode* d=r;
        for(int i=1;i<b.size();i++){
            ListNode* e=new ListNode(b[i]);
            d->next=e;
            d=e;
        }
        return r;
    }
};