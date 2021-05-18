Example 1:

Input :
            8
         /     \
        3      10
      /   \      \
     1     6     14
         /   \   /
        4     7 13
Output : 8 10 14 3 6 7 13 1 4
Explanation:
unnamed
Diagonal Traversal of binary tree : 
 8 10 14 3 6 7 13 1 4
Your Task:
You don't need to read input or print anything. The task is to complete the function diagonal() that takes the root node as input argumets and returns the diagonal traversal of the given tree.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).
Here N is number of nodes.

Constraints:
1 <= Number of nodes<= 105
1 <= Data of a node<= 105
 
  
  
vector<int> diagonal(Node *root)
{
   queue<Node*> q;
   q.push(root);
   vector<int> ans;
   while(!q.empty())
   {
       Node* curr=q.front();
       while(curr)
       {
           ans.push_back(curr->data);
           if(curr->left)
           q.push(curr->left);
           
           
         curr =  curr->right;
       }
       q.pop();
   }
   
   return ans;
}
