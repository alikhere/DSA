class Solution {
    int ans = INT_MIN;
public:
    int solve(TreeNode* root) {
        if(root == NULL)
            return 0;

        int l = solve(root->left);
        int r = solve(root->right);

        int tino_le_liye = l + r + root->val;

        int root_and_koiek = root->val + max(l,r);

        int onlyroot = root->val;

        ans = max({ans, tino_le_liye, root_and_koiek, onlyroot});

        return max(root_and_koiek, onlyroot);
    }
    int maxPathSum(TreeNode* root) {

        solve(root);
        return ans;
  
    }
};
