


class Solution {
        private:
    TreeNode *prev=NULL;
public:
    TreeNode* increasingBST(TreeNode* root) {
          if(NULL == root)
            return root;
        //Traversing right subtree first
        increasingBST(root->right);
        root->right=prev;
        prev=root; 
        TreeNode *res=root;
        //If left subtree exists traverse left subtree and return leftmost node 
        if(root->left){
            res=increasingBST(root->left);
            root->left=NULL;
        }
        //else return root only
        return res;
    }
};
