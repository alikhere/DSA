class Solution {
public:
    vector<int> ans;
    void solve(TreeNode* root) {
        if(root == NULL)
            return;
        solve(root->left);
        ans.push_back(root->val);
        solve(root->right);

    }
    vector<int> inorderTraversal(TreeNode* root) {
        solve(root);
        return ans;
    }
};
