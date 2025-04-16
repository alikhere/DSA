class Solution {
    int count = 0;
public:
    void solve(TreeNode* root, int maxValue) {
        if(root == NULL)
            return;
        if(root->val >= maxValue)
            count++;
        maxValue = max(maxValue,root->val);
        solve(root->left,maxValue);
        solve(root->right,maxValue);

    }
    int goodNodes(TreeNode* root) {
        if(root == NULL)
            return 0;
        solve(root,INT_MIN);
        return count;
        
    }
};
