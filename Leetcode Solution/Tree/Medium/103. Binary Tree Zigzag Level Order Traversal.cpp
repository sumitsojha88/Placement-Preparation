
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       vector<vector<int>> res;
            queue<TreeNode*> q;
            if(root==NULL)
                    return res;
            q.push(root);
            while(!q.empty())
            {
                    int size=q.size();
                    vector<int> c={};
                     for(int i = 0; i < size; i++)
                    {
                       TreeNode* curr=q.front();
                            q.pop();
                            c.push_back(curr->val);
                            if(curr->left)
                                    q.push(curr->left);
                            if(curr->right)
                                    q.push(curr->right);
                    }
                    res.push_back(c);
            }
            for(int i=0;i<res.size();i++)
                    if(i%2)
                    reverse(res[i].begin(),res[i].end());
            
            return res;
    }
};
