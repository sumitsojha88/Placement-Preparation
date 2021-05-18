Example 1:

Input:
      1
    /
   2
    \
     3 
Output: 0
Explanation: The max difference in height
of left subtree and right subtree is 2,
which is greater than 1. Hence unbalanced
Example 2:

Input:
       10
     /   \
    20   30 
  /   \
 40   60
Output: 1
Explanation: The max difference in height
of left subtree and right subtree is 1.
Hence balanced. 
Your Task:
You don't need to take input. Just complete the function isBalanced() that takes root node as parameter and returns true, if the tree is balanced else returns false.

Constraints:
1 <= Number of nodes <= 105
0 <= Data of a node <= 106

Expected time complexity: O(N)
Expected auxiliary space: O(h) , where h = height of tree


// is balanced, else false. 
int height(Node *root){
    if(root == NULL) return -1;
    else
        return max(height(root->left),height(root->right))+1;;
}

bool isBalanced(Node *root)
{
    if(root==NULL) return true;
    
    int left = height(root->left)+1;
    int right = height(root->right)+1;
    int ans  = (left>right)?(left-right):(right-left);
    
    if(ans <=1 && isBalanced(root->left) && isBalanced(root->right))
        return true;
        
    return false;
}
