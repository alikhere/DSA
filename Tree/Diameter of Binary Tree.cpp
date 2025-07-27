class Solution {
public:
    int dimeter = 0;
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        int left = 1 + maxDepth(root->left);
        int right = 1 + maxDepth(root->right);
        dimeter = max(dimeter,abs(left-1 + right-1));
        return max(left, right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        maxDepth(root);
        return dimeter;

    }
};
