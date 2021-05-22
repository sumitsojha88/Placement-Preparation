
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
          std::vector<std::vector<int>> res;
        if (root == NULL) return res;
        std::queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int levelSize = q.size();
            std::vector<int> currLevel;
            for (int i = 0; i < levelSize; i++) {
                TreeNode* curr = q.front(); 
                q.pop();
                currLevel.push_back(curr->val);
                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);
            }
            res.push_back(currLevel);
        }
        std::reverse(res.begin(), res.end());
        return res;
    }
};
