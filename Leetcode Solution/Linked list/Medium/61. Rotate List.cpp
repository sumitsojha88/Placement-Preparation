
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
    ListNode* rotateRight(ListNode* head, int k) {
       if(head==NULL || head->next==NULL || k==0)
              return head;
            int p = k+1;
           ListNode* temp = head;
            while(temp->next)
            {
                temp = temp->next;    
            }
            temp->next = head;
            ListNode* end;
            while(p--)
            {
                    end = head;
                    head = head->next;              
            }
            
            end->next = NULL;
            
            return head;
        
    }
};
