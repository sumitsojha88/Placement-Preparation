
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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
         TreeNode* bsTree = new TreeNode(preorder[0]);
        
        vector<int>::iterator it = preorder.begin();
	    advance(it, 1);

	    while (it != preorder.end()) { insert(bsTree, *it); ++it;}
        
        return bsTree;
    }
    
    void insert(TreeNode* root, int x) {
        if (x < root->val) {
            if (root->left == NULL) {
                TreeNode* temp = new TreeNode(x);
                root->left = temp;
            }
            else insert(root->left, x);
        }
        else {
            if (root->right == NULL) {
                TreeNode* temp = new TreeNode(x);
                root->right = temp;
            }
            else insert(root->right, x);
        }
    }
};
