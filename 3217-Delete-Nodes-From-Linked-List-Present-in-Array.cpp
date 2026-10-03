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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>a;
        for(int i:nums){
            a.insert(i);
        }
        if(head==nullptr){
            return nullptr;
        }
        while(head!=nullptr && a.find(head->val)!=a.end()){
            ListNode* r=head;
            head=head->next;
        }
        ListNode* temp=head;
        while(temp->next!=nullptr){
            if(a.find(temp->next->val)!=a.end()){
                ListNode* c=temp->next;
                temp->next=temp->next->next;
            }
            else{
                temp=temp->next;
            }
        }
        temp=head;
        return temp;
    }
};
