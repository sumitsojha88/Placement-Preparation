Example 1:

Input:
      1
   /    \
  2      3
Output: 2 1 3
Example 2:

Input:
       10
    /      \
  20        30
 /   \    /    \
40   60  90    100
Output: 40 20 10 30 100
Your Task:
Since this is a function problem. You don't have to take input. Just complete the function printTopView() that takes root node as parameter and prints the top view. Print endline after end of printing the top view.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N).

Constraints:
1 <= N <= 105
1 <= Node Data <= 105
  
  
  void topView(struct Node *root)
{
    map<int,int> mp;
    queue<pair<Node*,int>> q;
    q.push(make_pair(root,0));
    while(!q.empty())
    {
        int size = q.size();
        for(int i=0;i<size;i++)
        {
            pair<Node*,int> curr = q.front();
            q.pop();
            
            if(mp.find(curr.second)==mp.end())
            mp[curr.second] = curr.first->data;
            
            if(curr.first->left)
            q.push(make_pair(curr.first->left,curr.second-1));
            
            if(curr.first->right)
            q.push(make_pair(curr.first->right,curr.second+1));
        }
    }
    
    for(auto it:mp)
    {
        cout << it.second << " " ;
    }
    
}
