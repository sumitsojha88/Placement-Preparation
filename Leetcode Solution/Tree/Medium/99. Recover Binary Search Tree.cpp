
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

        
       vector<int> ans; 
        void inorder(TreeNode* node)
        {
                if(!node) return ;
                
                inorder(node->left);
                
                ans.push_back(node->val);
                
                 inorder(node->right);
               
        }
  void fix(TreeNode* node,int src,int des)
  {
          
          if(!node) return ;
          
          fix(node->left,src,des);
          
          if(node->val==src)
          {
             node->val = des;     
          }
         else if(node->val==des)
          {
             node->val = src;     
          }
          
          
          fix(node->right,src,des);
          
          
  }
 void recoverTree(TreeNode* root) {
         
         inorder(root);
                    
         vector<int> diff;
         
         for(int i=0;i< (ans.size()-1 ) ;i++)
         {
                      if(ans[i]>=ans[i+1])
                      {
                     diff.push_back(ans[i]);
                              break;
                      }
         }
         for(int i=ans.size()-1;i>=0 ;i--)
         {
                      if(ans[i]<=ans[i-1])
                      {
                     diff.push_back(ans[i]);
                              break;
                      }
         }
         
         fix(root,diff[0],diff[1]);
                 
    }
};
