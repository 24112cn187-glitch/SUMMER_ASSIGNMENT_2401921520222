
class Solution {
public:

    bool exists(TreeNode* root , TreeNode* target)
    {
        if(root == target) return true;
        if(root == NULL) return false;
        return exists(root->left , target ) || exists(root->right , target);

    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) return root;
        if(p==root || q== root) return root;
        if(exists(root->left , p) && exists(root->right , q)) return root;
        if(exists(root->right , p) && exists(root->left , q)) return root;
        if(exists(root->left , p) && !exists(root->right , q)) return lowestCommonAncestor(root->left , p , q);
        if(!exists(root->left , p) && exists(root->right , q)) return lowestCommonAncestor(root->right , p , q);
        
        return root;
    }
};
