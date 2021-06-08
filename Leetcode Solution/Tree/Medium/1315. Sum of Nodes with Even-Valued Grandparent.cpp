
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
Solution 1: Time O(N) Space O(1)
Appraoch:
Traverse array and check if grandparent is even
if its even check if grandchildren are present if yes add them else move on to next
  

 
class Solution {
public:
   
    int sumEvenGrandparent(TreeNode* root) {
         if(!root) return 0;
            int ans=0;
            
           int t = root->val;
    if(t%2==0)
    {
        if(root->left)
        {
            if(root->left->left)
            ans += root->left->left->val;
            if(root->left->right)
            ans += root->left->right->val;
        }
        if(root->right)
        {
            if(root->right->left)
            ans += root->right->left->val;
            if(root->right->right)
            ans += root->right->right->val;
        }
    }

   return ans+ sumEvenGrandparent(root->left)+sumEvenGrandparent(root->right);    

    }
};
