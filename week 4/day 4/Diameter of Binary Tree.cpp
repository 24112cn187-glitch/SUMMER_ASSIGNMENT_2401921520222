class Solution {
public:

    int levels(TreeNode* root)
    {
        if(root==NULL) return 0;
        return 1+max(levels(root->left),levels(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int a=levels(root->left)+levels(root->right);
        int ans=max(a,max(diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right)));
        return ans;
    }
};
