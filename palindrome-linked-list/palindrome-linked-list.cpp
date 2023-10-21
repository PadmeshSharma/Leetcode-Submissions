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
        if (!head || !head->next) {
            return true; // An empty list or a single node is a palindrome.
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        // Find the middle of the linked list using the slow and fast pointers.
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // Reverse the second half of the linked list.
        ListNode* secondHalf = reverseList(slow->next);
        
        // Compare the first half with the reversed second half.
        while (secondHalf) {
            if (head->val != secondHalf->val) {
                return false; // Not a palindrome.
            }
            head = head->next;
            secondHalf = secondHalf->next;
        }
        
        return true;
    }
    
    // Helper function to reverse a linked list.
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        while (head) {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
};
