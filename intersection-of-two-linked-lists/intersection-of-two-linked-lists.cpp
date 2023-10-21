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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tempA = headA;
        ListNode *tempB = headB;
        int lengthA = 0, lengthB = 0;

        while (tempA != NULL) {
            tempA = tempA->next;
            lengthA++;
        }

        while (tempB != NULL) {
            tempB = tempB->next;
            lengthB++;
        }

        tempA = headA;
        tempB = headB;

        if (lengthA >= lengthB) {
            int len = lengthA - lengthB;
            while (len > 0) {
                tempA = tempA->next;
                len--;
            }
        } else {
            int len = lengthB - lengthA;
            while (len > 0) {
                tempB = tempB->next;
                len--;
            }
        }

        while (tempA != tempB && tempA != NULL) {
            tempA = tempA->next;
            tempB = tempB->next;
        }

        if (tempA == tempB)
            return tempA;

        return nullptr;
    }
};
