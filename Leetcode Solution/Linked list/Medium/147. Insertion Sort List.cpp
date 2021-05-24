
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
            
            ListNode* curr = head;
            while(curr->next!=nullptr)
            {
                    if(curr->val > curr->next->val)
                    {
                            swap(curr->val,curr->next->val);
                    }
                    
                    
                    curr = curr->next;
            }
            
            
            return head;
        
    }
};
