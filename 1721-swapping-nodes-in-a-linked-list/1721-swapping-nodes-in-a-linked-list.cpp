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
    ListNode* swapNodes(ListNode* head, int k) {
        int count = 1;
        ListNode *temp = head;
        int startval;
        while(temp!=NULL){

            if(count == k) startval = temp->val;
            count++;
            temp = temp->next;
        }
        int totalSize = count;
        int l = totalSize-k;
        temp = head;
        count = 1;
        int endval;
        while(temp!=NULL){

            if(count==l) endval = temp->val;
            count++;
            temp = temp->next;
        }
        temp = head;
        count = 1;

        while(temp!=NULL){
            
            if(count==k) temp->val = endval;
            if(count == l) temp->val = startval;
            count++;
            temp = temp->next;
        }
        return head;
    }
};