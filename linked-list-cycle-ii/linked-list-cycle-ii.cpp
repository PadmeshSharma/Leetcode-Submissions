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
    ListNode* detectCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return nullptr;  // There can't be a cycle with 0 or 1 node.
        }
        
        ListNode *fast = head;
        ListNode *slow = head;
        ListNode *meetingNode = nullptr;
        
        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
            
            if (fast == slow) {
                meetingNode = fast;  // They have met.
                break;  // Exit the loop.
            }
        }
        
        if (meetingNode == nullptr) {
            return nullptr;  // No cycle found.
        }
        
        // Find the node where the cycle starts.
        ListNode* start = head;
        while (start != meetingNode) {
            start = start->next;
            meetingNode = meetingNode->next;
        }
        
        return start;
    }
};
