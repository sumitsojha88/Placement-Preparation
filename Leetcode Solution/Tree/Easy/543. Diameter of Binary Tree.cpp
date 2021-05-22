
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
        int height(TreeNode* x)
        {
           if(x==nullptr)
           return 0;
        
                return max(height(x->left),height(x->right)) + 1 ;
        }
    int diameterOfBinaryTree(TreeNode* root) {
            
            if(root==nullptr)
                  return 0;
           
            
            // when nodes through root
            int left_h = height(root->left);
            int right_h = height(root->right);
            int totalh = left_h + right_h ;
            
            // other case
            
            int ldiameter = diameterOfBinaryTree(root->left);
            int rdiameter = diameterOfBinaryTree(root->right);
            
            
            int res = max(totalh,max(ldiameter,rdiameter));
            
            
            
            
        return res;
    }
};
