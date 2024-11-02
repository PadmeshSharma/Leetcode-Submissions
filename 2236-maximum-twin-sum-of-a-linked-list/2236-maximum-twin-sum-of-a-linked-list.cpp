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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }

    int pairSum(ListNode* head) {
        // Step 1: Find the middle of the linked list
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse the second half of the linked list
        ListNode* secondHalfHead = reverseList(slow);

        // Step 3: Calculate twin sums and find the maximum twin sum
        int maxTwinSum = 0;
        ListNode* firstHalfHead = head;
        while (secondHalfHead != nullptr) {
            int twinSum = firstHalfHead->val + secondHalfHead->val;
            maxTwinSum = max(maxTwinSum, twinSum);
            firstHalfHead = firstHalfHead->next;
            secondHalfHead = secondHalfHead->next;
        }

        return maxTwinSum;
    }
};
