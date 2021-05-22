

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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
      
         /*   if(root==NULL)
                    return NULL;
            if(root==p || root==q)
                    return root;
            TreeNode* left = lowestCommonAncestor(root->left,p,q);
            TreeNode* right = lowestCommonAncestor(root->right,p,q);
            
            if(left!=NULL && right!=NULL)
                    return root;
            
            if(left==NULL && right==NULL)
                    return NULL;
            
            
            return left!=NULL ? left : right ; */
            
        if( root == nullptr or root == p or root == q )
        {
            return root;
        }
            
        TreeNode* left = lowestCommonAncestor( root->left, p, q );
        TreeNode* right = lowestCommonAncestor( root->right, p, q );
        if( left == nullptr )
        {
            return right;
        }
        if( right == nullptr )
        {
            return left;
        }
        
        return root;
            
            
    }
};
