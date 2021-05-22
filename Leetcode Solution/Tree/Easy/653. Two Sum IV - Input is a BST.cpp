
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
            vector<int> vec;

public:
          void inorder(TreeNode* node)
    {
        if(!node)
            return;
        inorder(node -> left);
        vec.push_back(node->val);
        inorder(node -> right);
    }
    bool findTarget(TreeNode* root, int k) {
            
              if(!root)
            return false;
        inorder(root);
        int i = 0, j = vec.size()-1;
        while(i < j)
        {
            int sum = vec[i]+vec[j];
            if(sum == k)
                return true;
            else if(sum < k)
                i++;
            else
                j--;
        }
        return false;
            
        
    }
};
