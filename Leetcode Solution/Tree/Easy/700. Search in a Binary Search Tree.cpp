
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
    TreeNode* searchBST(TreeNode* root, int val) {
       
            while(root)
            {
                    if(root->val==val)
                            break;
           else if(val < root->val)
                    root=root->left;
            else
                    root=root->right;
            }
            
          return  root;
    }
};
