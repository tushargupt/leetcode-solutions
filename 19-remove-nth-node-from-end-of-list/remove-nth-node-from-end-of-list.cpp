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
    if (!head) return nullptr;
    
    ListNode dummy(0);
    dummy.next = head;
    
    ListNode* slow = &dummy;
    ListNode* fast = &dummy;
    
    for (int i = 0; i < n; i++) {
        if (!fast->next) return head; 
        fast = fast->next;
    }
    
    while (fast->next) {
        fast = fast->next;
        slow = slow->next;
    }
    
    ListNode* toDelete = slow->next;
    slow->next = slow->next->next;
    
    if (toDelete == head) {
        return dummy.next;
    }
    
    return head;
}
};

