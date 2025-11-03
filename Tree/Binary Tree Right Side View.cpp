class Solution {
public:
    vector<int> ans;
    vector<int> rightSideView(TreeNode* root) {
        if(root == NULL)
            return {};
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            int n = q.size();
            ans.push_back(q.front()->val);
            for(int i = 0; i < n; i++) {
                TreeNode* temp = q.front();
                q.pop();
                if(temp->right != NULL)
                    q.push(temp->right);
                if(temp->left != NULL)
                    q.push(temp->left);
            }
        }
        return ans;
    }
};
