
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
class Solution {
public:
         int maxDepth = 0;
    
    TreeNode* helper(TreeNode* root, int& depth) {
        if (root == NULL) {
            return NULL;
        }
        
        depth++; // for this node.
        // identify if this is a leaf node.
        if (root->left == NULL && root->right == NULL) {
            return root;
        }
        
        int leftDepth = depth; 
        // if either exist, we want to ask the children.
        TreeNode* left = helper(root->left, leftDepth);
        
        int rightDepth = depth;
        TreeNode* right = helper(root->right, rightDepth);
        
        // if both sides are equal then this node is the contendor for LCA.
        if (rightDepth == leftDepth) {
            depth = leftDepth;
            return root;
        }
        
        if (rightDepth > leftDepth) {
            depth = rightDepth;
            return right;
        } else {
            depth = leftDepth;
            return left;
        }
        
        // now when it returns to the parent, the parent has the choice again to check against
        // its left and right. And again if the length from both the sides is equal, the
        // LCA contender will change, until it reaches the root.
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
          int depth = 0;
        return helper(root, depth);
    }
};
