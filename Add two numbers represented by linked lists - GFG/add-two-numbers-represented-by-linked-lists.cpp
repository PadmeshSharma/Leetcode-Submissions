//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

struct Node* reverse(struct Node* &head)
{
   struct Node* prev=NULL;
   struct Node* curr=head;
   struct Node* next=NULL;
   while(curr!=NULL)
   {
       next=curr->next;
       curr->next=prev;
       prev=curr;
       curr=next;
   }
   return prev;
}
void insertAtTail(struct Node* &head, struct Node* &tail, int val) {
        
        Node* temp = new Node(val);
        //empty list
        if(head == NULL) {
            head = temp;
            tail = temp;
            return;
        }
        else
        {
            tail -> next = temp;
            tail = temp;
        }
    }
struct Node* add(struct Node* &head1,struct Node* &head2)
{
    int carry=0;
    struct Node* AnsHead=NULL;
    struct Node* AnsTail=NULL;
    while(head1!=0 || head2!=0 || carry!=0)
    {
        int val1=0,val2=0;
        if(head1!=NULL)
        {
            val1=head1->data;
        }
        if(head2!=NULL)
        {
            val2=head2->data;
        }
        int sum=carry+val1+val2;
        int dig=sum%10;
        insertAtTail(AnsHead,AnsTail,dig);
        carry=sum/10;
        if(head1 != NULL)
                head1 = head1 -> next;
            
        if(head2 != NULL)
            head2 = head2 -> next;
    }
    return AnsHead;
}

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        if(first==NULL)
            return second;
        if(second==NULL)
            return first;
            
        struct Node* head1=reverse(first);
        struct Node* head2=reverse(second);
        struct Node* heads=add(head1,head2);
        struct Node* head=reverse(heads);
        return head;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends