
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

Approach :
first we will find maximum val and make it as an root
now we will assign all values before maximum index to left and rest to right
and we will follow same steps


class Solution {
public:
        TreeNode* maxitree(vector<int>& a,int l,int r)
        {
                if(l>r) return nullptr;
                int maxi=-1;
                int maxindex=-1;
                for(int i=l;i<=r;i++)
                {
                      if(a[i]>maxi)
                      {
                              maxi = a[i];
                              maxindex = i;
                      }     
                }
                
                TreeNode* root = new TreeNode(maxi);
             root->left =  maxitree(a,l,maxindex-1);
             root->right=  maxitree(a,maxindex+1,r);
                
                
                return root;
        }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
            
            int n=nums.size();    
            return maxitree(nums,0,n-1);   
    }
};
