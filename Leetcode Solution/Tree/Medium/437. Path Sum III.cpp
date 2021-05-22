
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
       int count=0; 
    void getsum(TreeNode* root,int sum)
    {
            if(!root)
                    return ;
            if(root->val == sum)
            {
                    count++;
            }
            
            getsum(root->left,sum-root->val);
            getsum(root->right,sum-root->val);
    }
        
        
        
        
        
        
    int pathSum(TreeNode* root, int sum) {
        if(root){
                getsum(root,sum);
                pathSum(root->left,sum);
                pathSum(root->right,sum);
        }
            
            return  count;
    }
};
