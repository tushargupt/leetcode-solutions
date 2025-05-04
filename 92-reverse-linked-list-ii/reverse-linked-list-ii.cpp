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
        if(!head || !head->next || left == right)
        return head;
        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;
        for(int i= 1; i<left; i++){
           prev = prev->next;
        }
        ListNode* curr = prev->next;
        ListNode* tail = curr;
        ListNode* next = nullptr;
        for(int i=0; i<=right-left; i++){
        next = curr->next;
        curr->next = prev->next;
         prev->next = curr;
         curr = next;
        }
        tail->next = curr;
        return dummy.next;

    }
};