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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || k == 0) {
            return head; // No need to rotate an empty list or by 0 positions.
        }
        
        int length = 1; // Initialize length to 1 (the head node).
        ListNode* current = head;
        
        // Calculate the length of the linked list.
        while (current->next) {
            current = current->next;
            length++;
        }
        
        // Determine the effective rotation count.
        int effectiveRotation = k % length;
        
        if (effectiveRotation == 0) {
            return head; // No need to rotate if effectiveRotation is 0.
        }
        
        // Find the new tail node.
        current->next = head; // Make the list circular.
        int newTailPosition = length - effectiveRotation;
        current = head;
        
        while (newTailPosition > 1) {
            current = current->next;
            newTailPosition--;
        }
        
        // Set the new head and break the circular list.
        ListNode* newHead = current->next;
        current->next = nullptr;
        
        return newHead;
    }
};
