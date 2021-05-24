
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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        
            
            ListNode *dummy = new ListNode(0);
            ListNode* p= dummy;
            ListNode* curr;
            dummy->next = head;
           
                for(int i=0;i<m-1;i++)
                {
                     p=p->next;
                }
            curr = p->next;
            
                for(int i=0;i<n-m;i++)
                {
                    ListNode* temp =  p->next;
                      p->next =  curr->next;
                        curr->next = curr->next->next;
                        p->next->next = temp;   
                }
                   
            
            return dummy->next;
    }
};
