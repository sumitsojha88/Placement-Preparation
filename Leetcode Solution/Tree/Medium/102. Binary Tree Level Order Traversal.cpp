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
Using BFS
// Time O(n) Space O(n)
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
            
            if(!root) return {};
            
            vector<vector<int>> ans;
            queue<TreeNode*> q;
            q.push(root);
            while(!q.empty())
            {
                    int size = q.size();
                    vector<int> v;
                    while(size--)
                    {
                            TreeNode* curr=q.front();
                            q.pop();
                            v.push_back(curr->val);
                            if(curr->left)
                            {
                                 q.push(curr->left);   
                            }
                            if(curr->right)
                            {
                                 q.push(curr->right);   
                            }
                    }
                    ans.push_back(v);
            }
            
            return ans;
    }
};
