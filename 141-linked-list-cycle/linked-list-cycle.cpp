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
        unordered_map<ListNode*, bool> vis;
        ListNode* curr = head;
        while(curr){
            if(vis.count(curr) && vis[curr]==true)
            return true;
            vis[curr] = true;
            curr = curr->next;
        }
        return false;
    }
};