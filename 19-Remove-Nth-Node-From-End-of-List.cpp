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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<int>a;
        ListNode* b=head;
        if(head->next==nullptr && n==1){
            ListNode* d=head;
            head=head->next;
            delete d;
            return head;
        }
        while(b!=nullptr){
            a.push_back(b->val);
            b=b->next;
        }
        for(int i=0;i<a.size();i++){
            if(i==a.size()-n){
                a.erase(a.begin()+i);
                i--;
            }
        }
        ListNode* r=new ListNode(a[0]);
        ListNode* s=r;
        for(int i=1;i<a.size();i++){
            ListNode* c=new ListNode(a[i]);
            s->next=c;
            s=c;
        }
        return r;
    }
};