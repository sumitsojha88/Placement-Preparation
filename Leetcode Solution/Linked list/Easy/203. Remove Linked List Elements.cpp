

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
    ListNode* removeElements(ListNode* head, int val) {
                ListNode* curr = head;
        ListNode* prev = NULL;
 
            while(curr!=NULL)
            {
                    if(curr->val == val)
                    {
                        if(prev==NULL)
                        {
                                head=curr->next;
                        }
                            else
                            {
                                    prev->next=curr->next;
                            }
                    }    
                            else
                            {
                                    prev=curr;
                            }
                    curr=curr->next;
            }        
                    
           return head; 
    }
};
