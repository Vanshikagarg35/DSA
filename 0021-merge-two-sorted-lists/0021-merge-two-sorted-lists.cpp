class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> nums;
        ListNode* temp = list1;
        while(temp != nullptr) {
            nums.push_back(temp->val);
            temp = temp->next;
        }
        
        temp = list2;
        while(temp != nullptr) {
            nums.push_back(temp->val);
            temp = temp->next;
        }
        
        sort(nums.begin(), nums.end());
        
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        
        for(auto i : nums) {
            curr->next = new ListNode(i);
            curr = curr->next;
        }
        
        return dummy->next;
    }
};