

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
Solution 1: // Time O(n) space O(n)
Approach :
1)find inorder traversal of both
2) match them if they are equal means tree is same else not.



Solution 2:
// Time O(n) space O(1)
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
            
            
            return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
        
    }
};
