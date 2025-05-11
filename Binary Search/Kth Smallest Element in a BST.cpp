class Solution {
public:
vector<int> ans;
void f(TreeNode* root){
    if(root==NULL) return ;
    f(root->left);
    ans.push_back(root->val);
    f(root->right);
}
    int kthSmallest(TreeNode* root, int k) {
        f(root);
       int n=ans.size();
       return ans[k-1];
    }
};
