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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head || !head->next)
            return head;
        
        ListNode dummy(0);
        dummy.next = head;
        ListNode* curr = head;
        ListNode* next = nullptr;
        int n = 0;
        
        while(curr){
            n++; 
            curr = curr->next;   
        }
        
        curr = &dummy;
        int groups = n/k;  
        
        for(int i=0; i<groups; i++){
            ListNode* groupStart = curr->next;  
            ListNode* nextGroupStart = nullptr;
            
            ListNode* end = groupStart;
            for(int j=1; j<k; j++) {
                end = end->next;
            }
            nextGroupStart = end->next;            
            end->next = nullptr;            
            ListNode* reversedHead = reverseList(groupStart);            
            curr->next = reversedHead;
            groupStart->next = nextGroupStart; 
            curr = groupStart;
        }
        
        return dummy.next;

    }
private:
   ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;
        
        while(curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
   }
};