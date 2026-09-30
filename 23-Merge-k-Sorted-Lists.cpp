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
 ListNode* mergeKlist(ListNode* head1,ListNode* head2){
    if(head1==nullptr && head2==nullptr){
        return nullptr;
    }
    else if(head1==nullptr){
        return head2;
    }
    else if(head2==nullptr){
        return head1;
    }
    ListNode* dummpy=new ListNode(0);
    ListNode* left=dummpy;
    while(head1!=nullptr && head2!=nullptr){
        if(head1->val<head2->val){
            left->next=head1;
            left=left->next;
            head1=head1->next;
        }
        else if(head1->val==head2->val){
            left->next=head1;
            left=left->next;
            head1=head1->next;
        }
        else{
            left->next=head2;
            left=left->next;
            head2=head2->next;
        }
    }
    if(head1==nullptr){
        left->next=head2;
        left=left->next;
        head2=head2->next;
    }
    else{
        left->next=head1;
        left=left->next;
        head1=head1->next;
    }
    return dummpy->next;

 }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0){
            return nullptr;
        }
        ListNode* head1=lists[0];
        ListNode* head2;
        for(int i=1;i<lists.size();i++){
            head2=lists[i];
            head1=mergeKlist(head1,head2);
        }
        return head1;
    }
};