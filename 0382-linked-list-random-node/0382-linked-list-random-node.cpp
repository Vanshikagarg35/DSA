class Solution {
private:
    ListNode* headNode;

public:
    Solution(ListNode* head) {
        headNode = head;
    }
    
    int getRandom() {
        int res = 0;
        ListNode* curr = headNode;
        int size = 1;

        while(curr != nullptr) {
            if(rand() % size == 0) {
                res = curr->val;
            }
            curr = curr->next;
            size++;
        }
        
        return res;
    }
};