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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummpy = new ListNode(0);
        dummpy->next = head;
        ListNode* bl = dummpy;
        ListNode* temp = head;
        for (int i = 0; i < left - 1; i++) {
            bl = bl->next;
            temp = temp->next;
        }
        ListNode* r = temp;
        ListNode* back = nullptr;
        for (int i = 0; i < right - left + 1; i++) {
            ListNode* front = temp->next;
            temp->next = back;
            back = temp;
            temp = front;
        }
        bl->next = back;
        r->next = temp;
        return dummpy->next;
    }
};
