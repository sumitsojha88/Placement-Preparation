
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
         vector<int> ans;
        void getval(TreeNode* node)
        {
              if(!node) return ;
                ans.push_back(node->val);
        getval(node->left);
                getval(node->right);
                
                
                
                
        }
        
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
             getval(root1);
            getval(root2);
            
            sort(ans.begin(),ans.end());
            
            
            return ans;
    }
};
