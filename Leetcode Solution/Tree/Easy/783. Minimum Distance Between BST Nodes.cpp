
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
                            int diff=INT_MAX;
                   int prev=-1;
    int minDiffInBST(TreeNode* root) {
        if(root==NULL)
                return 0;
          if(root->left)
                  diff=minDiffInBST(root->left);
            
            if(prev>=0)
                     diff=min(diff,abs(prev-root->val));
            prev=root->val;
            if(root->right)
                    diff=minDiffInBST(root->right);
            
            return diff;
    }
};
