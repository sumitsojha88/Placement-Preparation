
Example 1:

Input:
      1
    /  \
   2    3
Output: 2
Example 2:

Input:
  2
   \
    1
   /
 3
Output: 3   
  
  
  Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)


Constraints:
1 <= Number of nodes <= 105
1 <= Data of a node <= 105
  
  class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
         return 0;
         
            return max(maxDepth(root->left),maxDepth(root->right)) + 1 ;
            
    }
};
