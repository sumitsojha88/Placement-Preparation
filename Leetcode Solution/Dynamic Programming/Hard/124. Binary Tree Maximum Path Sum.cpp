class Solution {
public:
    int sum=INT_MIN;
    int dfs(TreeNode* root){
        if(!root)
            return 0;
        int a = dfs(root->left);
        int b = dfs(root->right);
        int val = max({root->val+a+b,root->val+a,root->val+b,root->val});
        sum = max(sum,val);
        val = max({root->val+a,root->val+b,root->val});
        return val;
    }
    int maxPathSum(TreeNode* root) {
        dfs(root);
        return sum;
    }
};