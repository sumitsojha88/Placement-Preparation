

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
        
 void solve(TreeNode* root,int max_till_now,int min_till_now,int &res){
        if(root==NULL){
            return;
        }
        res=max(abs(max_till_now-root->val),res);
        res=max(abs(min_till_now-root->val),res);
        
        max_till_now=max(root->val,max_till_now);
        min_till_now=min(root->val,min_till_now);
        
        solve(root->left,max_till_now,min_till_now,res);
        solve(root->right,max_till_now,min_till_now,res);
    }
    int maxAncestorDiff(TreeNode* root) {
        if(NULL == root || (NULL ==root->left && NULL == root->right))
            return 0;
        int max_till_now=root->val;
        int min_till_now=root->val;
        int res=0;
        
        solve(root->left,max_till_now,min_till_now,res);
        solve(root->right,max_till_now,min_till_now,res);
        return res;
    }
};
