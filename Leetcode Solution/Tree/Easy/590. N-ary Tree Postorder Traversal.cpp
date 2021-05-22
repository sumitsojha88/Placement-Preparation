
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
       
            stack<Node*> s;
            vector<int> v;
             if(root==NULL)
                return v;
            s.push(root);
            while(!s.empty())
            {
                    Node* node=s.top();
                    s.pop();
                    v.push_back(node->val);
                    for(int i=0;i<node->children.size();i++)
                    
                            s.push(node->children[i]);
                    
                 
            }
             reverse(v.begin(),v.end());  
         return v ;          
    }
};
