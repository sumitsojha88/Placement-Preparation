
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
     TreeNode* tree(vector<int>& inorder,int ileft,int iright,vector<int>& postorder,int pleft,int pright)
     {
             
           if(ileft>iright || pleft>pright)
                   return NULL;
             int val=postorder[pright];
             int i=ileft;
             
             while(inorder[i]!=val)
                     i++;
             
             TreeNode* root= new TreeNode(val);
             
             root->left=tree(inorder,ileft,i-1,postorder,pleft,pleft+i - ileft -1);
             root->right=tree(inorder,i+1,iright,postorder,pright-(iright-i),pright-1);
             
             
             return root;            
             
     }
        
        
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
       return tree(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1); 
    }
};
