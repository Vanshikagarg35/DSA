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
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next == NULL) return true;
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast!=NULL && fast->next!= NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *temp1 = head;
        ListNode *temp2 = slow;
        while(temp1->next!=slow){
            temp1 = temp1->next;
        }
        
        temp1->next = NULL;
        ListNode *prev = NULL;
        ListNode *curr = slow;
        ListNode *fut = NULL;
        while(curr!=NULL){
            fut = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fut;
        }
        ListNode *comp1 = head;
        ListNode *comp2 = prev;
        while(comp1!= NULL){
            if(comp1->val != comp2->val){
                return false;
            }
            comp1 = comp1->next;
            comp2 = comp2->next;
        }
        return true;
    }
};