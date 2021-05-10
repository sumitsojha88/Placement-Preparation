

Question Link:- https://practice.geeksforgeeks.org/problems/find-length-of-loop/1


int count(struct Node* n)
{
    int res=1;
    struct Node* temp = n;
    while(temp->next!=n)
    {
        res++;
        temp = temp->next;
    }
    
    return res;
}
int countNodesinLoop(struct Node *head)
{
   Node* slow = head;
   Node* fast = head;
   while(slow && fast && fast->next )
   {
       slow = slow->next;
       fast = fast->next->next;
       
       if(slow==fast)
       {
         return   count(slow);
       }
   }
   
   return 0;
}
