

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
    int getDecimalValue(ListNode* head) {
        string str="";
        while(head!=nullptr)
        {
            string temp=to_string(head->val);
            str+=temp;
            head=head->next;
        }
        int ans=0,c=str.size()-1;
        for(auto x:str)
        {
            if(x=='1')
                ans+=pow(2,c);
            c--;
        }
        return ans;
    }
};
