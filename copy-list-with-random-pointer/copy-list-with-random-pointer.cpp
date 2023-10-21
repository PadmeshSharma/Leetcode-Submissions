/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) {
            return nullptr;
        }
        
        // Create a map to associate original nodes with their copied nodes
        unordered_map<Node*, Node*> nodeMap;
        
        // First pass: create a copy of each node and link them together
        Node* current = head;
        while (current) {
            nodeMap[current] = new Node(current->val);
            current = current->next;
        }
        
        // Second pass: set the random pointers for copied nodes
        current = head;
        while (current) {
            Node* copiedNode = nodeMap[current];
            copiedNode->next = nodeMap[current->next];
            copiedNode->random = nodeMap[current->random];
            current = current->next;
        }
        
        // Return the head of the copied linked list
        return nodeMap[head];
    }
};
