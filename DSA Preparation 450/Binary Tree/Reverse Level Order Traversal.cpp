
Input :
       10
      /  \
     20   30
    / \ 
   40  60

Output: 40 60 20 30 10
Explanation:
Traversing level 2 : 40 60
Traversing level 1 : 20 30
Traversing level 0 : 10
  
  
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
  
  
vector<int> reverseLevelOrder(Node *root)
{
   vector<int>res;
    if(!root)
    return res;
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        int n=q.size();
        vector<int>temp;
        while(n--){
        Node* p=q.front();
        q.pop();
        temp.push_back(p->data);
        if(p->left)
        q.push(p->left);
        if(p->right)
        q.push(p->right);
        }
        res.insert(res.begin(),temp.begin(),temp.end());
    }
    return res;
}
