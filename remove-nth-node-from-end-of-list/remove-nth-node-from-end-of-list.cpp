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
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* prev = nullptr;

        // Move the fast pointer n nodes ahead
        while(n) {
            if (fast == nullptr) {
                // If n is greater than the length of the list, do nothing
                return head;
            }
            fast = fast->next;
            n--;
        }

        // Move fast and slow pointers in tandem until fast reaches the end
        while (fast != nullptr) {
            fast = fast->next;
            prev = slow;
            slow = slow->next;
        }

        // If the node to be removed is the head
        if (prev == nullptr) {
            head = head->next;
        } else {
            prev->next = slow->next;
        }

        return head;
    }
};
