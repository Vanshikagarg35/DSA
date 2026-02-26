class Solution {
public:
    ListNode* temp;
    Solution(ListNode* head) {
        temp = head;
    }
    int getRandom() {
        int res;
        ListNode* curr = temp;
        int size = 1;
        while(curr) {
            if(rand()%size == 0)
                res = curr->val;
            curr = curr->next;
            size++;
        }
        return res;
    }
};