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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp = head;
        int count = 0;
        while(temp!=NULL){
            temp = temp->next;
            count++;
        }
        int delpos = count - n;
        if(delpos == 0){
            temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        count = 0;
        temp = head;
        ListNode *prev = NULL;
        while(count!= delpos){
            prev = temp;
            temp = temp->next;
            count++;
        }
        prev->next = temp->next;
        delete temp;
        return head;
    }
};