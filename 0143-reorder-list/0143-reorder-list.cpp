class Solution {
public:
    ListNode* reverseLL(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        
        while (curr != nullptr) {
            ListNode* fut = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fut;
        }
        
        return prev;
    }
    
    void reorderList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode* list1 = head;
        ListNode* list2 = reverseLL(slow);
        
        while (list2->next != nullptr) {
            ListNode* next1 = list1->next;
            ListNode* next2 = list2->next;
            
            list1->next = list2;
            list2->next = next1;
            
            list1 = next1;
            list2 = next2;
        }
    }
};