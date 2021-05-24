

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
    ListNode* partition(ListNode* head, int x) {
        
            ListNode dummy(0),dummy2(0);
            ListNode* curr = head;
            ListNode* p1 = &dummy;
             ListNode* p2 = &dummy2;
          
            while(curr)
            {
                    if(curr->val<x)
                    {
                          p1 = p1->next = curr;
                            
                    }
                    else
                    {
                            p2 = p2->next = curr;
                    }
                    
                    curr = curr->next;
            }
            
            p2->next = NULL;
            p1->next = dummy2.next;
            return dummy.next;
    }
};
