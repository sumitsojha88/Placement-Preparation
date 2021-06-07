
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
        TreeNode* maketree(vector<int>& nums,int l,int h)
        {
                if(l>h)
                {
                        return 0;
                }
                if(l==h)
                {
                        return new TreeNode(nums[l]);
                }
                
                int mid = (l+h)/2;
                         
                
                
                TreeNode* root = new TreeNode(nums[mid]);
                root->left = maketree(nums,l,mid-1);
                root->right = maketree(nums,mid+1,h);
                
                
                return root;
        }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
            
            int n=nums.size();
            return maketree(nums,0,n-1);
            
        
    }
};
