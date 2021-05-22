
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
/* void inorder(TreeNode* root,vector<int> &ans)
{
        if(root==NULL) return ;
        
        inorder(root->left,ans);
        
        ans.push_back(root->val);
        
        inorder(root->right,ans);
        
        
} */
        bool check(TreeNode* root,TreeNode* min,TreeNode* max)
        {
        if(root==NULL) return true;
                
              if(min!=NULL && min->val >= root->val)  
              {
                    return false;
              }
                
                if(max!=NULL && max->val <= root->val)  
              {
                    return false;
              }
                
                return check(root->left,min,root) && check(root->right,root,max);
                
                
                
        }
    bool isValidBST(TreeNode* root) {
      
          if(root==NULL) return true;
            
          return   check(root,NULL,NULL);
            
            
    }
};
