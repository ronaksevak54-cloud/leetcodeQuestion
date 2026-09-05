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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr){
            return nullptr;
        }
        ListNode* temp=head;
        while(temp->next!=nullptr){
            if(temp->next->val==val){
                ListNode* a=temp->next;
                temp->next=temp->next->next;
                delete a;
            }
            else{
            temp=temp->next;
            }
        }
        if(head->val==val){
            ListNode* b=head;
            head=head->next;
            delete b;
            return head;
        }
        temp=head;
        return temp;
    }
};
