
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        queue<Node* > q;
            q.push(root);
            q.push(NULL);
            while(!q.empty() && q.front()!=NULL)
            {
                    while(q.front()!=NULL)
                    {
                            Node* curr = q.front();
                            q.pop();
                            curr->next = q.front();
                            if(curr->left)
                                    q.push(curr->left);
                            if(curr->right)
                                    q.push(curr->right);
                    }
                    q.pop();
                    q.push(NULL);
            }
            
            return root;
    }
};
