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
        vector<int>a;
        unordered_map<int,int>b;
        if(head==nullptr){
            return nullptr;
        }
        ListNode* temp=head;
        while(temp!=nullptr){
            a.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i<a.size();i++){
            b[a[i]]++;
        }
        vector<int>c;
        for(int i=0;i<a.size();i++){
            if(b[a[i]]<2){
                c.push_back(a[i]);
            }
        }
        if(c.size()==0){
            return nullptr;
        }
        ListNode* r=new ListNode(c[0]);
        ListNode* s=r;
        for(int i=1;i<c.size();i++){
            ListNode* t=new ListNode(c[i]);
            s->next=t;
            s=t;
        }
        return r;
    }
};


