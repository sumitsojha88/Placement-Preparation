
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
    ListNode *detectCycle(ListNode *head) {
     if(head==NULL) return NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        bool ret=false;
        while(fast->next!=NULL)
        {
            fast = fast->next;
            slow = slow->next;
            if(fast->next==NULL) return NULL;
            fast = fast->next;
            if(fast==slow) 
            {
                ret = true;
                break;
            }
        }
        if(ret==false) return NULL;
       slow = head;
        while(slow!=fast)
        {
            slow = slow->next;
            fast = fast->next;
        } 
        return slow;
    }
};
