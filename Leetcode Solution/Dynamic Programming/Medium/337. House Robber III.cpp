class Solution {
public:
    map<TreeNode*,int>mp;
    int dfs(TreeNode* root){
        if(!root)
            return 0;
        if(mp.count(root))
            return mp[root];
        int ll=0,lr=0,rl=0,rr=0;
        if(root->left){
            ll = dfs(root->left->left);
            lr = dfs(root->left->right);
        }
        if(root->right){
            rl = dfs(root->right->left);
            rr = dfs(root->right->right);
        }
        int l = dfs(root->left);
        int r = dfs(root->right);
        
        
        return mp[root] = max(root->val+ll+lr+rl+rr,l+r);
    }
    int rob(TreeNode* root) {
        return dfs(root);
    }
};