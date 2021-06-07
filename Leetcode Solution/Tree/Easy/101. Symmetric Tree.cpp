
Almost same as Question 100. Same Tree:- https://leetcode.com/problems/same-tree/
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
// Time O(N) Space O(1)
class Solution {
public:
        bool isSameTree(TreeNode* p, TreeNode* q) {
            
            if(p==NULL && q==NULL) return true;
            if(p==NULL && q!=NULL) return false;
            if(p!=NULL && q==NULL) return false;
            
            if(p->val!=q->val)
            {
                    return false;
            }
               
            return isSameTree(p->left,q->right) && isSameTree(p->right,q->left);
        
    }
    bool isSymmetric(TreeNode* root) {
            
            return isSameTree(root->left,root->right);
            
        
    }
};
