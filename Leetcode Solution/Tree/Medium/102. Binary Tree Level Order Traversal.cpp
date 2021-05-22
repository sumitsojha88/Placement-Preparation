
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        vector<int> temp;
        
        if(root == NULL)return ans;
        
      q.push(root);
            
            while(!q.empty())
            {
                    int size = q.size();
                    while(size--)
                    {
                            TreeNode* curr = q.front();
                            q.pop();
                            temp.push_back(curr->val);
                            if(curr->left)
                                    q.push(curr->left);
                            if(curr->right)
                                    q.push(curr->right);
                    }
                    
                    ans.push_back(temp);
                    temp.clear();
            }
            
            return ans;
    }
};
