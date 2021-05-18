
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
*/
class Solution {
public:
        
  /*       vector<int> v;  // recursion
   vector<int> preorderTraversal(TreeNode* root) {
         
           if(root==NULL)
                   return v;
           if(root!=NULL)
           {
                   v.push_back(root->val);
                 preorderTraversal(root->left);
                   preorderTraversal(root->right);
                  
           }
           
           return v; */
        
         vector<int> preorderTraversal(TreeNode* root) {   // iterative
                 vector<int> v;
                 stack<TreeNode*> s;
                 while(root!=NULL || !s.empty())
                 {
                         while(root!=NULL)
                         {
                             v.push_back(root->val);
                              s.push(root);
                             root=root->left;
                         }
                            root = s.top();
                         s.pop();
                         root=root->right;
                 }
                 
                 return v;
        
       
    }
   
};
