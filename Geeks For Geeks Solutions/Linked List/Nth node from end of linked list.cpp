
Ques link: https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1



int getNthFromLast(Node* head,int n)
{
    struct Node *back = head;
    struct Node *front = head;
      int i=1;
     if(!head) 
     return -1;
   while(i <= n )
{
   front = front->next;
      if(front == NULL and i< n)
  return -1;
   i++;
}
while(front != NULL)
{
front = front->next;
back = back->next;
}
int re = back->data;
return re;
}
