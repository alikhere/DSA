class Solution {
public:
    vector<vector<int>> ans;
    void solve(TreeNode* root) {
        if(root == NULL)
        return;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<int> temp;
        while(!q.empty()) {
            TreeNode* currNode = q.front();
            q.pop();
            if(currNode != NULL) {
                temp.push_back(currNode->val);
                if(currNode->left != NULL)
                    q.push(currNode->left);
                if(currNode->right != NULL)
                    q.push(currNode->right);
            } else {
                ans.push_back(temp);
                temp.clear();
                if(q.empty())
                    break;
                q.push(NULL);
            }

        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        solve(root);
        return ans;
        
    }
};
