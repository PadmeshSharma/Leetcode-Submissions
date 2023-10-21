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
    if (head == nullptr || head->next == nullptr) {
        return false;  // There can't be a cycle with 0 or 1 node.
    }
    
    ListNode *fast = head;
    ListNode *slow = head;
    
    while (fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next;
        slow = slow->next;
        
        if (fast == slow) {
            return true;  // If fast and slow meet, there's a cycle.
        }
    }
    
    return false;  // If we reach the end of the list, there's no cycle.
}
};