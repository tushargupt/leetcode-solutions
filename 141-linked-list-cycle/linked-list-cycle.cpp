/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || !head->next) return false;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(slow!=fast){
            if(!fast || !fast->next) return false;
            fast = fast->next->next;
            slow = slow->next;
        }
        return true;
    }
};