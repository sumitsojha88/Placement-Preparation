
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
        int val;
        int ans;
       void inorder(TreeNode* root)
       {
               if(root==NULL)
                       return ;
               inorder(root->left);
                       val--;
               if(val==0)
                       ans=root->val;
               inorder(root->right);
                       
       }
        
        
        
        
    int kthSmallest(TreeNode* root, int k) {
             val=k;
            inorder(root);
            return ans;
    }
};
