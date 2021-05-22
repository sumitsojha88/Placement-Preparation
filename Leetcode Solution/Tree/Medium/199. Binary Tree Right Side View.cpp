
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
    vector<int> rightSideView(TreeNode* root) {
             queue<TreeNode *>q; 
            vector<int>ans;
        if(!root)
                return ans;
       
         q.push(root);
            while(!q.empty())
            {
                   int size=q.size();
                    for(int i=0;i<size;i++)
                    {
                      auto curr = q.front();
                            q.pop();
                            if(i==size-1)
                              ans.push_back(curr->val);
                            if(curr->left)
                                    q.push(curr->left);
                            if(curr->right)
                                    q.push(curr->right);
                    }
            }
            
            return ans;
    }
};
