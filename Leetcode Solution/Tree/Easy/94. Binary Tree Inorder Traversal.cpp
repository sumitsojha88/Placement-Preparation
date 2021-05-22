

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
      /*Recursion   vector<int> v;

     vector<int> inorderTraversal(TreeNode* root) {
       if(root==NULL)
                return v;
             if(root!=NULL)
             {
                    inorderTraversal(root->left);
                     v.push_back(root->val);
                     inorderTraversal(root->right);
             }
             
             
             return v;
             */
        vector<int> inorderTraversal(TreeNode* root) {
          vector<int> v;
                stack<TreeNode*> s;
                while(root!=NULL || !s.empty())
                {
                        while(root!=NULL)
                        {
                                s.push(root);
                                root=root->left;
                        }
                        root = s.top();
                        s.pop();
                        v.push_back(root->val);
                        root=root->right;            
                }
                
                
                return v;
                
                
       
    }
   
}; 
