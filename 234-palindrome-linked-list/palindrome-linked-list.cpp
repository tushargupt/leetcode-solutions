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
        if(!head || !head->next)
        return true;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode* h2 = slow->next;
        slow->next = NULL;
        h2 = reverse(h2);
        while(head && h2){
            if(head->val!=h2->val)
            return false;
            head = head->next;
            h2 = h2->next;
        }

        return true;
    }
private:
 ListNode* reverse(ListNode* head){
    if(!head || !head->next)
    return head;
    ListNode* prev = NULL;
    ListNode* curr = head;
    ListNode* next = NULL;
    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
 }
};
