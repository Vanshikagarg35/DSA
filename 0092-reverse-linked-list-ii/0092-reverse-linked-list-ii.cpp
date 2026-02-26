class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* start = dummy;
        for (int i = 1; i < left; i++) {
            start = start->next;
        }

        ListNode* curr = start->next;
        ListNode* subListHead = curr;
        ListNode* prev = nullptr;
        ListNode* fut = nullptr;
        for (int i = 0; i <= right - left; i++) {
            fut = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fut;
        }

        start->next = prev;        
        subListHead->next = curr;    
        return dummy->next;
    }
};