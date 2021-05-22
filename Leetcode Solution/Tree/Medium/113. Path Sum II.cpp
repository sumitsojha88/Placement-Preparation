
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
     
        void helper(TreeNode* root,int sum,vector<vector<int>> &ans,vector<int> temp)
        {
                if(!root)
                        return ;
                temp.push_back(root->val);
                if(!(root->left) && !(root->right) && sum== root->val)
                         ans.push_back(temp);
                helper(root->left,sum - root->val,ans,temp);
                helper(root->right,sum - root->val,ans,temp);
                
                temp.pop_back();
                
        }
        
        
        
        
        
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
            vector<vector<int>> ans;
            vector<int> temp;
            
            helper(root,sum,ans,temp);
            
            return ans;
        
    }
};
