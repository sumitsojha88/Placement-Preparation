

Question Link:- https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1


bool isPalindrome(Node *head)
{

       Node *fast = head;
        Node *slow = head;
        while (fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
        if (fast)
            slow = slow->next;

        // reverse the last half of the list
        Node *dummy = slow;
        Node *last = nullptr;
        Node *next = nullptr;
        while(dummy){
            next = dummy->next;
            dummy->next = last;
            last = dummy;
            dummy = next;
        }

        // compare each half of the list
        dummy = last;
        while(dummy){
            if (dummy->data == head->data){
                dummy = dummy->next;
                head = head->next;
            } 
            else
                return false;
        }

        return true;
 
}
