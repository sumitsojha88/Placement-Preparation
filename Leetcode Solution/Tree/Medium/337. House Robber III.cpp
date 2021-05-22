
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
         int dfs(TreeNode* root, map<TreeNode*,int> &m){
        if(root==NULL)
            return 0;
        if(m.count(root))
            return m[root];
        int val=0;
        if(root->left)
            val+=dfs(root->left->left,m)+dfs(root->left->right,m);
        if(root->right)
            val+=dfs(root->right->left,m)+dfs(root->right->right,m);
        val=max(val+root->val,dfs(root->left,m)+dfs(root->right,m));
        return m[root]=val;
    }
    int rob(TreeNode* root) {
         map<TreeNode*,int> m;
        return dfs(root,m);
    }
};
