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
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* nextNode;
        while(curr!=NULL)
        {
            nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;    
        }
        return prev;
    }
    
    ListNode* addTwoNumbersrev(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode();
        ListNode* temp=dummy;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry){
            int sum=0;
            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            sum+=carry;
            carry=sum/10;
            ListNode* newnode=new ListNode(sum%10);
            temp->next=newnode;
            temp=temp->next;
        }
        return dummy->next;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)     {
        ListNode* head1=reverseList(l1);
        ListNode* head2=reverseList(l2);
        ListNode* head3=addTwoNumbersrev(head1, head2);
        ListNode* head=reverseList(head3);
        return head;
    }
};