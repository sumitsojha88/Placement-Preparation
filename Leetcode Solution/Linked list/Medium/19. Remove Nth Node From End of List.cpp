
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      
       if(head==NULL || n==0)
               return head;
            ListNode* p=head;
            ListNode* q=head;
            int count=0;
            while(p->next!=NULL)
            {
                    count++;
                    p=p->next;
                    if(count>n)
                            q=q->next;
            }
            if(count==n-1)
            {
                    return head->next;
            }
            q->next=q->next->next;
            
            return head;
    }
};
