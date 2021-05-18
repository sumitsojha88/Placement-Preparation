Example 1:

Input:
       1
     /   \
    3     2
Output: 3 1 2
Explanation:
First case represents a tree with 3 nodes
and 2 edges where root is 1, left child of
1 is 3 and right child of 1 is 2.

Thus nodes of the binary tree will be
printed as such 3 1 2.
Example 2:

Input:
         10
       /    \
      20    30
     /  \
    40   60
Output: 40 20 60 30
Your Task:
This is a functional problem, you don't need to care about input, just complete the function bottomView() which takes the root node of the tree as input and returns an array containing the bottom view of the given tree.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1 <= Number of nodes <= 105
1 <= Data of a node <= 105
  
  
  vector <int> bottomView(Node *root)
{
    vector<int> ans;
  if(root==NULL)
	return ans;
   queue<pair<Node*,int>> q;
   map<int,int> mp;
   q.push(make_pair(root,0));
   while(!q.empty())
   {
       int size=q.size();
       for(int i=0;i<size;i++)
       {
           pair<Node*,int> curr = q.front();
           q.pop();
           
           mp[curr.second] = curr.first->data;
           
           if(curr.first->left)
           q.push(make_pair(curr.first->left,curr.second-1));
           
           if(curr.first->right)
           q.push(make_pair(curr.first->right,curr.second+1));
       }
   }
   
   map<int ,int >::iterator it;
	for(it=mp.begin();it!=mp.end();it++)
	{
		ans.push_back(it->second);
	}
	
	
	return ans;
}
