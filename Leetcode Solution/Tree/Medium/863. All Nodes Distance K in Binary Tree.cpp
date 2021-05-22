
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
    vector<int> distanceK(TreeNode* root, TreeNode* target, int K) {
       unordered_map<TreeNode*,TreeNode*> parent;
            unordered_map<TreeNode*,bool > visit;
            queue<TreeNode*> q;
            q.push(root);
            while(!q.empty())
            {
                TreeNode* curr = q.front();
                    q.pop();
                    
                    if(curr->left)
                    {
                        parent[curr->left] = curr;
                            q.push(curr->left);
                    }
                   
                     if(curr->right)
                    {
                        parent[curr->right] = curr;
                            q.push(curr->right);
                    }
            }
            
            q.push(target);
             visit[target] = true;
            int currlevel = 0;
            while(!q.empty())
            {
                    int size = q.size();
                    if(currlevel++ == K)
                            break;
                    for(int i=0;i<size;i++)
                    {
                          TreeNode* curr = q.front();
                            q.pop();
                            
                            if(curr->left && !visit[curr->left])
                            {
                                    q.push(curr->left);
                                    visit[curr->left] = true;
                            }
                            if(curr->right && !visit[curr->right])
                            {
                                    q.push(curr->right);
                                    visit[curr->right] = true;
                            }
                            
                            if(parent[curr]  && !visit[parent[curr]])
                            {
                                     q.push(parent[curr]);
                                    visit[parent[curr]] = true;
                            }
                     
                    }
                        
            }
            
            vector<int> res;
            while(!q.empty())
            {
                    TreeNode* curr = q.front();
                    q.pop();
                    res.push_back(curr->val);
            }
            
            return res;
    }
};
