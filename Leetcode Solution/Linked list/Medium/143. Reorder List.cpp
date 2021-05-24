
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
    void reorderList(ListNode* head) {
         stack<ListNode*> s;
    queue<ListNode*> q;
    int len = 0, count = 0;
    ListNode dummyHead(0);
    ListNode *p = head;
    while(p){
        s.push(p);
        q.push(p);
        p = p->next;
        len++;
    }
    p = &dummyHead;
    while(count < len){
        p->next = q.front();
        q.front()->next = s.top();
        p = s.top();
        q.pop();
        s.pop();
        count += 2;
    }
    p->next = NULL;
    }
};
