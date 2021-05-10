

Question Link: https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1



int detectloop(Node *head) {
  
  
Node *p=head,*q=head;
  
   while(p!=0&&q!=0&&q->next!=0)
   {
    p=p->next;
     q=q->next->next;
if(p==q)
return true;
}
return false;
}
