
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
    ListNode* reverseList(ListNode* head) {
   if(head == NULL)
            return head;
          
            ListNode* prev = NULL;
            ListNode* curr = head;
            while(curr!=NULL)
            {
                ListNode* next1 = curr->next;
                   curr->next = prev;
                    prev = curr;
                    curr= next1;
            }
            
            
            return prev;
            
    }
};
