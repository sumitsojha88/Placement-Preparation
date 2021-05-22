
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
        int sum=0;
        void solve(TreeNode* root,int num)
        {
                
                 if(root==NULL)
                  return ;
            
            num=num*10 + root->val;
                if(root->left==NULL && root->right==NULL)
                        sum=sum + num;
                
                solve(root->left,num);
                solve(root->right,num);
                
        }
        
        
        
        
    int sumNumbers(TreeNode* root) {
         solve(root,0);
            return sum;
         
            
    }
};
