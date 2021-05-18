Example 1:

Input:
   1
 /  \
3    2
Output: 1 3

Example 2:

Input:

Output: 10 20 40
Your Task:
You just have to complete the function leftView() that prints the left view. The newline is automatically appended by the driver code.
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).

Constraints:
0 <= Number of nodes <= 100
1 <= Data of a node <= 1000
  
  
  void leftView(Node *root)
{
  queue<Node* > q;
  vector<int> ans;
  
  if(root==NULL)
  return ;
  
  q.push(root);
  
  while(!q.empty())
  {
      int size = q.size();
      for(int i=0;i<size;i++)
      {
          Node* curr = q.front();
          q.pop();
          if(i==0)
           cout << curr->data << " ";
           if(curr->left)
              q.push(curr->left);
              if(curr->right)
              q.push(curr->right);
      }
  }
  
  
}
