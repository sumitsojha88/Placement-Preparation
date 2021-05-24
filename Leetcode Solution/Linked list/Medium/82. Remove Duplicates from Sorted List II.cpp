
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
    ListNode* deleteDuplicates(ListNode* head) {
         if(!head ||  !head->next)
                 return head;
            
            ListNode* dummy = new ListNode(0);
            ListNode* tail=dummy;
            int flag = true;
            while(head)
            {
                    while(head&&head->next && head->val==head->next->val)
                    {
                          flag = false;
                            head=head->next;
                    }
                    if(flag)
                    {
                            tail->next = head;
                            tail = tail->next;
                    }
                    
                   head = head->next;
                    flag = true;
            }
            
            tail->next = nullptr;
            
           return dummy->next; 
            
            
            
    }
};
