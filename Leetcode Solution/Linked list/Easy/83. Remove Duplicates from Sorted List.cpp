

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
  if(head == NULL)
          return NULL; 
		
        ListNode* slow = head;
            ListNode* fast = head->next;
            
            while(fast!=NULL)
            {
                if(slow->val != fast->val)
                {
                        slow = fast;
                        fast = fast->next;
                }
                    else
                    {
                            slow->next = fast->next;
                            delete fast;
                            fast = slow->next;
                    }
               
            }
            
            return head;
    
            
    }
};
