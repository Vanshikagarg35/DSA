class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum = 0, carry = 0;
        ListNode* ans = new ListNode();
        ListNode* head = ans; 
        while (l1 || l2) {
            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            
            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }
            ans->val = sum % 10;
            carry    = sum / 10;
            if (l1 || l2 || carry > 0) {
                ListNode* newNode = new ListNode(carry); 
                ans->next = newNode;        
                ans = newNode;         
            }
            
            sum = carry;
        }

        return head;
    }
};