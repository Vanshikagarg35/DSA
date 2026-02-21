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
        ListNode *temp = head;
        int size = 0;
        while(temp!= NULL){
            temp = temp->next;
            size++;
        }
        if(size== 0 || size==1) return head;
        k = k%size;
        if(k == 0) return head;
        int pos = size - k;
        pos = pos-1;
        ListNode *prev = head;
        while(pos--){
            prev = prev->next;
        }
        temp = prev->next;
        ListNode *last = temp;
        while(last->next!=NULL){
            last = last->next;
        }
        last->next = head;
        prev->next = NULL;
        head = temp;
        return head;
    }
};