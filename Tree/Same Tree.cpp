class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL) // when both leaf node
            return true;
        if(!p || !q) // when one of them is null
            return false;
        if(p->val != q->val)
            return false;
        bool left = isSameTree(p->left, q->left);
        bool right = isSameTree(p->right, q->right);

        return left && right;
        
    }
};
