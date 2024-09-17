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
        map<Node*, Node*> oldToCopy;
        oldToCopy[NULL] = NULL;
        Node* curr = head;
        while(curr != NULL){
            Node* copy = new Node(curr->val);
            oldToCopy[curr] = copy;
            curr = curr->next;
        }
        curr = head;
        while(curr != NULL){
            Node* copy = oldToCopy[curr];
            copy->next = oldToCopy[curr->next];
            copy->random = oldToCopy[curr->random];
            curr = curr->next;
        }
        return oldToCopy[head];
    }
};