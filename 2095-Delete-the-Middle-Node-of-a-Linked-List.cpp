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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==nullptr){
            return nullptr;
        }
        vector<int>r;
        ListNode* temp=head;
        while(temp!=nullptr){
            r.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i<r.size();i++){
            if(r.size()%2==0){
                if(i==r.size()/2){
                    r.erase(r.begin()+i);
                    i--;
                    break;
                }
            }
            else{
                if(i==r.size()/2){
                    r.erase(r.begin()+i);
                    i--;
                    break;
                }
            }
        }
        ListNode* s=new ListNode(r[0]);
        ListNode* k=s;
        for(int i=1;i<r.size();i++){
            ListNode* t=new ListNode(r[i]);
            k->next=t;
            k=t;
        }
        return s;
    }
};