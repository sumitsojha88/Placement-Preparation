

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
     int sum = 0;
    int rangeSumBST(TreeNode* root, int L, int R) {
       sums(root , L ,R);
            return sum;
    }
        void sums(TreeNode* root, int L, int R)
        {
                if(!root) return ;
            if(root->val >= L && root->val <=R)
                sum+=root->val ;
               sums(root->left,L,R);
                sums(root->right,L,R);
        
    }
};
