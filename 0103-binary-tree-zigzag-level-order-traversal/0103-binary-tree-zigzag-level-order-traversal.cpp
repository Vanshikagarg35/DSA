class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode *> q;
        int count = 1;
        
        if (root != NULL) {
            q.push(root);
            ans.push_back({root->val});
            count++;
        } else {
            return ans;
        }
        
        while (!q.empty()) {
            int size = q.size();
            vector<int> templevel;
            
            for (int i = 0; i < size; i++) {
                TreeNode* temp = q.front();
                q.pop();
                
                TreeNode* left = temp->left;
                if (left != NULL) {
                    q.push(left);
                    templevel.push_back(left->val);
                }
                
                TreeNode* right = temp->right;
                if (right != NULL) {
                    q.push(right);
                    templevel.push_back(right->val);
                }
            }
            
            if (!templevel.empty()) {
                if (count % 2 == 0) {
                    reverse(templevel.begin(), templevel.end());
                }
                ans.push_back(templevel);
            }
            count++;
        }
        
        return ans;
    }
};