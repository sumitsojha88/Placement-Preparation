
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
        int res=0;
    int countNodes(TreeNode* root) {
          if(root==NULL)
                  return 0;
            res++;
            countNodes(root->left);
            countNodes(root->right);
          
            
          return res;                  
    }
};
