

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
         bool inorder(TreeNode* root,int val)
         {
              if(root==NULL) return true; 
                 
                 return ((inorder(root->left,val) && inorder(root->right,val)) && root->val==val);
                 
                 
                 
         }
        
        
        
    bool isUnivalTree(TreeNode* root) {
            
            
        return     inorder(root,root->val);
            
            
        
    }
};
