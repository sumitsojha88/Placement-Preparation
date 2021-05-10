

Question Link : https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1



Node * removeDuplicates( Node *head) 
{
   struct Node *ptr1, *ptr2, *dup; 
    ptr1 = head; 
  
    /* Pick elements one by one */
    while (ptr1 != NULL && ptr1->next != NULL) 
    { 
        ptr2 = ptr1; 
  
        /* Compare the picked element with rest 
           of the elements */
        while (ptr2->next != NULL) 
        { 
            /* If duplicate then delete it */
            if (ptr1->data == ptr2->next->data) 
            { 
                /* sequence of steps is important here */
                dup = ptr2->next; 
                ptr2->next = ptr2->next->next; 
                delete(dup); 
            } 
            else /* This is tricky */
                ptr2 = ptr2->next; 
        } 
        ptr1 = ptr1->next; 
    } 
  return head;
  
}
