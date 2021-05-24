
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
              if(!head)   return head;
        Node* curr=head;
        while(curr)
        {
            if(curr->child)
            {
                Node* temp = curr->next;
                Node* x = flatten(curr->child);
                x->prev= curr;
                curr->next = x;
                Node* end = x;
                while(end->next)
                    end=end->next;
                end->next = temp;
                if(temp)
                    temp->prev = end;
                curr->child = NULL;
            }
            curr=curr->next;
        }
        return head;
        
    }
};
