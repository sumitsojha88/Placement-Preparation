Example 1:

Input:
       1
    /    \
   3      2
Output: 1 2
Example 2:

Input:
     10
    /   \
  20     30
 /   \
40  60 
Output: 10 30 60
Your Task:
Just complete the function rightView() that takes node as parameter and returns the right view as a list. 

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).

Constraints:
1 <= Number of nodes <= 105
1 <= Data of a node <= 105.
  
  
  vector<int> rightView(Node *root)
{
    queue<Node* > q;
  vector<int> ans;
  
  if(root==NULL)
  return ans;
  
  q.push(root);
  
  while(!q.empty())
  {
      int size = q.size();
      for(int i=0;i<size;i++)
      {
          Node* curr = q.front();
          q.pop();
          if(i==(size-1))
           ans.push_back(curr->data);
           if(curr->left)
              q.push(curr->left);
              if(curr->right)
              q.push(curr->right);
      }
  }
  
  
  return ans;
}
