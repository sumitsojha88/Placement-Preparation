

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
         
        vector<int> postorderTraversal(TreeNode* root){
                
            vector<int> v;
            stack<TreeNode*> s;
            while(root!=NULL ||  !s.empty())
            {
                    if(root!=NULL)
                    {
                            s.push(root->left);
                            v.push_back(root->val);
                            root=root->right;
                    }
                    else
                    {
                            root = s.top();
                            s.pop();
                    }
            }
                reverse(v.begin(),v.end());
                
                return v;
                    
             
              
    }
};
