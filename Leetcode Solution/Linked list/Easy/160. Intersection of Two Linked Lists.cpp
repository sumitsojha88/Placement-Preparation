
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
int len (ListNode *a)
{
        int count=0;
        if(!a)
                return 0;
        while(a)
        {
                a=a->next;
                count++;
        }
        return count;
}
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA && !headB) return NULL; 
        
        ListNode* a = headA;
        ListNode* b = headB;
        
        int di = len(headA) - len(headB);
        
        while (di > 0) {
            a = a->next;
            di--;
        }
        while (di < 0) {
            b = b->next;
            di++;
        }
        while (a && b) {
            if(a == b) return a;
            a = a->next;
            b = b->next;
        }
        return NULL;
    }
};
