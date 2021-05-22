

class Solution {
public:
    int count=0;
    void dfs(TreeNode* root,int bitVec)
    {
        if(!root)
            return;
        if(!root->left&&!root->right)			//Leaf node.
        {
            count+=__builtin_popcount(bitVec^(1<<root->val))<=1;//Check if number of 1's in the bit vector is <=1 (Only 1 odd number).
            return;
        }
        dfs(root->left,bitVec^(1<<root->val)),dfs(root->right,bitVec^(1<<root->val));	//DFS to the left and right node and updating the bit vector
    }
    int pseudoPalindromicPaths (TreeNode* root)
    {
        dfs(root,0);
        return count;
    }
};
