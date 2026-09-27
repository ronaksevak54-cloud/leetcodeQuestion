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
    bool isPalindrome(ListNode* head) {
        vector<int>a;
        ListNode* temp=head;
        while(temp!=nullptr){
            a.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>b;
        for(int i:a){
            b.push_back(i);
        }
        reverse(b.begin(),b.end());
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i]){
                return false;
            }
        }
        return true;
    }
};