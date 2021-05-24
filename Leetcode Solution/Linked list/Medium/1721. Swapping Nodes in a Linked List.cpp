
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
            
            int n=0;
            ListNode* size = head;
            while(size!=NULL)
            {
                  size =  size->next;
                    n++;
            }
            
                   
            if(k>n)
                    return head;
            
            if(k==n-k+1)
             return head;

           ListNode*temp1=head,*temp2=head;
ListNode*prev1=NULL,*prev2=NULL;

for(int i=1;i<n-k+1;i++) 
{ 
        prev1 = temp1;
        temp1=temp1->next;

}

for(int i=1;i<k;i++) {
         prev2=temp2;
                 temp2=temp2->next;
}
  if(prev1)
prev1->next=temp2;
if(prev2)
prev2->next=temp1;

ListNode*temp=temp1->next;
temp1->next=temp2->next;
temp2->next=temp;

if(k==1)
head=temp1;
if(k==n)
head=temp2;
return head;          
        
    }
};
