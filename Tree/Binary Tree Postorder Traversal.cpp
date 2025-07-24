class Solution {
public:
    vector<int> ans;
    void solve(TreeNode* root) {
        if(root == NULL)
            return;
        solve(root->left);
        solve(root->right);
        ans.push_back(root->val);

    }
    vector<int> postorderTraversal(TreeNode* root) {
        solve(root);
        return ans;
    }
};
