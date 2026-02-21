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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *last = head;
        int size = 1;
        if(head == NULL || head->next == NULL || k==0) return head;
        while(last->next!= NULL){
            last = last->next;
            size++;
        }
        k = k%size;
        if(k == 0) return head;
        int pos = size - k;
        pos = pos-1;
        last->next = head;
        ListNode *prev = head;
        while(pos--){
            prev = prev->next;
        }
        ListNode *temp = prev->next;
        prev->next = NULL;
        head = temp;
        return head;
    }
};