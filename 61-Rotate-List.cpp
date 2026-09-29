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
    ListNode* rotateRight(ListNode* head, int k) {
        vector<int>a;
        if(head==nullptr){
            return nullptr;
        }
        ListNode* temp=head;
        while(temp!=nullptr){
            a.push_back(temp->val);
            temp=temp->next;
        }
        k=k%a.size();
        reverse(a.begin(),a.end());
        reverse(a.begin(),a.begin()+k);
        reverse(a.begin()+k,a.end());
        ListNode* r=new ListNode(a[0]);
        ListNode* b=r;
        for(int i=1;i<a.size();i++){
            ListNode* c=new ListNode(a[i]);
            b->next=c;
            b=c;
        }
        return r;
    }
};