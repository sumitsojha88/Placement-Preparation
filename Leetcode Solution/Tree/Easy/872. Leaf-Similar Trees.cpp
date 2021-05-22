
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
     void inorder(TreeNode* node,vector<int>& ans)
     {
              if(node==NULL) return ;
             
             if(node->left==NULL && node->right==NULL)
                     ans.push_back(node->val);
             
             inorder(node->left,ans);
             inorder(node->right,ans);
             
         
     
     }
     
        
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
            vector<int> ans1;
            vector<int> ans2;
            
            inorder(root1,ans1);
            inorder(root2,ans2);
            
           if(ans1==ans2)
            return true;
            else
                    return false;
            
    }
};
