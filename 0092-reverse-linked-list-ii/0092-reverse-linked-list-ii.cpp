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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head || left==right) return head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* start = dummy;
        for(int i=1; i<left; i++){
            start = start->next;
        }
        ListNode* curr = start->next;
        ListNode* subListhead = curr;
        ListNode* prev = NULL;
        ListNode* fut = NULL;
        for(int i=0; i<=right-left; i++){
            fut = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fut;
        }
        start->next = prev;
        subListhead->next = curr;
        return dummy->next;



    }
};