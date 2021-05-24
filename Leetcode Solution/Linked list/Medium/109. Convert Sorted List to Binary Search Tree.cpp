
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
            
            if(!head) return NULL;
            if(!head->next) return new TreeNode(head->val);
            
            auto slow = head;
            auto fast = head;
            auto prev = head;
            
            
            while(fast && fast->next)
            {
                 prev = slow;
                    slow = slow->next;
                    fast = fast->next->next;
            }
            
            prev->next = NULL;
            
            TreeNode* root = new TreeNode(slow->val);
                    root->left = sortedListToBST(head);
                   root->right = sortedListToBST(slow->next);
            
            
            return root;
        
    }
};
