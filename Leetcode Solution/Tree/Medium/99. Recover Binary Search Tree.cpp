
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

 // Time: O(N) Space O(N);
Approach:
1)first using inorder traversal find array in sorted order.
2)As two elements are swapped so they are are in wrong lace find them and store.
3)Now find these value in swapped tree and replace with other value;
        
class Solution {
public:

        
       vector<int> ans; 
        void inorder(TreeNode* node)   // for inorder traversal
        {
                if(!node) return ;
                
                inorder(node->left);
                
                ans.push_back(node->val);
                
                 inorder(node->right);
               
        }
  void fix(TreeNode* node,int src,int des)   // for fixing the values in tree
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
         
         for(int i=0;i< (ans.size()-1 ) ;i++)     // for higher value
         {
                      if(ans[i]>=ans[i+1])
                      {
                     diff.push_back(ans[i]);
                              break;
                      }
         }
         for(int i=ans.size()-1;i>=0 ;i--)  // for lower value
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
