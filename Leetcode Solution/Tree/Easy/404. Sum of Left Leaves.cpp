

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
    int sumOfLeftLeaves(TreeNode* root) {
       
            if(root==NULL)
            return 0;
             int sum=0;
            queue<TreeNode*> q;
            q.push(root);
            while(!q.empty())
            {
                    int size=q.size();
                    while(size--){
                TreeNode* curr=q.front();
                    q.pop();
                    if(curr->left!=0 && curr->left->left==0 && curr->left->right==0)
                            sum += curr->left->val;
                    if(curr->left)
                            q.push(curr->left);
                    if(curr->right)
                            q.push(curr->right);
                    }
            
            }
           return sum; 
    }
};
