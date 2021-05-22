
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
        
        
       int ans=0; 
     int convert(vector<int> t)
     {
          int n=0;
             for(int i=0;i<t.size();i++)
             {
                     n = n*2 + t[i];
             }
             
         return n;    
             
     }
   void path(TreeNode* root,vector<int> v)
   {
           if(!root)
                   return;
           v.push_back(root->val);
           if(!root->left && !root->right)
                   ans += convert(v);
           
           path(root->left,v);
           path(root->right,v);
                   
   }

    int sumRootToLeaf(TreeNode* root) {
        if(!root)
                return 0;
            vector<int> v;
            path(root,v);
            return ans;
    }
};
