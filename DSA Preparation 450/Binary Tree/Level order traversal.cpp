

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)


Constraints:
1 <= Number of nodes<= 104
1 <= Data of a node <= 104






void levelOrder(Node* node)
{
   
  queue<Node*> q;
  if(node==NULL)
  return ;
  q.push(node);
  while(!q.empty())
  {
      int size = q.size();
      while(size--)
      {
          Node* curr = q.front();
          q.pop();
          cout << curr->data << " ";
          if(curr->left)
          q.push(curr->left);
          if(curr->right)
          q.push(curr->right);
      }
  }
  
  
}
