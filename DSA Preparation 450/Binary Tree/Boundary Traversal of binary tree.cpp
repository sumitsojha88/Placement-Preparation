Example 1:

Input:
        1
      /   \
     2     3    
   
Output: 1 2 3
Explanation:


Example 2:

Input:
          20
        /   \
       8     22
     /   \    \
    4    12    25
        /  \ 
       10   14 

Output: 20 8 4 10 14 25 22
Explanation: 

 

 

 

 

 

 

 

 

Your Task:
This is a function problem. You don't have to take input. Just complete the function printBoundary() that takes the root node as input and returns an array containing the boundary values in anti-clockwise.

 

Expected Time Complexity: O(N). 
Expected Auxiliary Space: O(Height of the Tree).

 

Constraints:
1 ≤ Number of nodes ≤ 105
1 ≤ Data of a node ≤ 105
  
  
  
  vector<int> ans;
void inorder(Node* root)
{    if(!root)
     return;
     inorder(root->left);
    if(!root->left && !root->right)
    ans.push_back(root->data);
    inorder(root->right);
}
void printRight(Node* ptr,vector<int>&v)
{
     if(ptr==NULL)
    return;
   if(ptr->left!=NULL || ptr->right!=NULL)
     v.push_back(ptr->data);
   if(ptr->right!=NULL)
    printRight(ptr->right,v);
    else if(ptr->left!=NULL)
    printRight(ptr->left,v);
}
void printLeft(Node* ptr)
{
    if(ptr==NULL)
    return;
   if(ptr->left!=NULL || ptr->right!=NULL)
   ans.push_back(ptr->data);
   if(ptr->left!=NULL)
    printLeft(ptr->left);
    else if(ptr->right!=NULL)
    printLeft(ptr->right);
}
vector <int> printBoundary(Node *root)
{ 
    vector<int>v;
ans.clear();
   ans.push_back(root->data);
   printLeft(root->left);
   inorder(root);
   printRight(root->right,v);
   for(int i=v.size()-1;i>=0;i--)
   ans.push_back(v[i]);
   
   
   return ans;
    
    
    
}
