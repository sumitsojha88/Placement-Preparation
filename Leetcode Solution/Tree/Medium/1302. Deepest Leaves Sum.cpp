

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
Solution 1:

Time O(N)
Space O(N)

Approach:
1)do level order traversal and find sum of last level

class Solution {
public:
        
    int deepestLeavesSum(TreeNode* root) {
            
      
            queue<TreeNode*> q;
            q.push(root);
            int sum=0;
            while(!q.empty())
            {
                    int size=q.size();
                     sum=0;
                    while(size--)
                    {
                        TreeNode* curr = q.front();
                            q.pop();
                            sum += curr->val;
                            
                            if(curr->left)
                            {
                                    q.push(curr->left);
                            }
                            if(curr->right)
                            {
                                 q.push(curr->right);   
                            }
                    }
            }
                   
            
            return sum;
    }
};


Solution 2:
Time O(N)
Space O(1)
  
Appraoch:
Traverse the tree to find the max depth.
Traverse the tree again to compute the sum required.

class Solution {
public:
        int sumleaf(TreeNode* root,int depth)
        {
             if(!root) return 0;
              if(depth==1)
              {
                      return root->val;
              }
             
                return sumleaf(root->left,depth-1)+sumleaf(root->right,depth-1);    
        }
        int maxdepth(TreeNode* root)
        {
                if(!root) return 0;
                return max(maxdepth(root->left),maxdepth(root->right))+1;
        } 
    int deepestLeavesSum(TreeNode* root) {      
          int d=maxdepth(root);        
           int ans=sumleaf(root,d);
            return ans;
    }
};
