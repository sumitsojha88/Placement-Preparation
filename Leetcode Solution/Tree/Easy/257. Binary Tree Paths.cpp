

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
        
    void helper(TreeNode* root,vector<string>& ans,string curr)
    {
            if(!root)
                    return ;
            if(root->left || root->right)
                    curr += (to_string(root->val) + "->") ;
            else
            {
                    curr += to_string(root->val) ;
                    ans.push_back(curr);
            }
            
            helper(root->left,ans,curr);
            helper(root->right,ans,curr);
               
    }
              
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
            string curr = "";
            helper(root,ans,curr);
            
            return ans;
    }
};
