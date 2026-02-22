class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL) return true;

        ListNode *slow = head;
        ListNode *fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *prev = NULL;
        ListNode *curr = slow;
        while(curr != NULL){
            ListNode *fut = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fut;
        }

        ListNode *comp1 = head;
        ListNode *comp2 = prev;
        while(comp2 != NULL){
            if(comp1->val != comp2->val){
                return false; 
            }
            comp1 = comp1->next;
            comp2 = comp2->next;
        }
        
        return true;
    }
};