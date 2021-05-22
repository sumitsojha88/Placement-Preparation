
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
    vector<double> averageOfLevels(TreeNode* root) {
         std::vector<double> res;
        if (root == NULL) 
                return res;
        std::queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            double currLvlSum = 0;
            int currLvlSize = q.size();
            for (int i = 0; i < currLvlSize; i++) {
                TreeNode* curr = q.front(); 
                q.pop();
                currLvlSum += curr->val;
                if (curr->left) 
                        q.push(curr->left);
                if (curr->right) 
                        q.push(curr->right);
            }
            res.push_back(currLvlSum/currLvlSize);
        }
        return res;
    }
};
