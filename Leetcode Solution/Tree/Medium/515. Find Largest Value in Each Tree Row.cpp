
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
    vector<int> largestValues(TreeNode* root) {
                      queue<TreeNode*> q;
            vector<int> ans;
            if(root==NULL)
                    return ans;
            q.push(root);
            while(!q.empty())
            {
                int size = q.size();
         int currmaxi= INT_MIN;
                    while(size--)
                    {
                            TreeNode* currNode = q.front();
                            q.pop();
                            currmaxi = max(currmaxi,currNode->val);
                            if(currNode->left)
                                    q.push(currNode->left);
                            if(currNode->right)
                                    q.push(currNode->right);
                    }
                    ans.push_back(currmaxi);
            }
        return ans;
 
        
    }
};
