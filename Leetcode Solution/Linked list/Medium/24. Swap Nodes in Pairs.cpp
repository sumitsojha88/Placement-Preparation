
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
    ListNode* swapPairs(ListNode* head) {
      if(!head) return NULL;
        ListNode *prev=head,*temp=head;
        while(temp->next!=NULL)
        {
            prev=temp;
          temp=temp->next;
            swap(prev->val,temp->val);
                temp=temp->next;
                if(!temp)
               break;
        }
        return head;
    }
};
