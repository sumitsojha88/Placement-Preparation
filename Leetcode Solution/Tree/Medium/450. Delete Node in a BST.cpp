
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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)
                return NULL;
            if(root->val > key)
            {  root->left=deleteNode(root->left,key);
             return root;
            }
           else if(root->val < key)
           {  root->right=deleteNode(root->right,key);
            return root;
           }
           
                    if(!root->left)
                            return root->right;
                    if(!root->right)
                            return root->left;
                    TreeNode*  curr=root->right;
                    while(curr->left)
                            curr=curr->left;
                    curr->left = root->left;
                    return root->right;
           
            
    }
};
