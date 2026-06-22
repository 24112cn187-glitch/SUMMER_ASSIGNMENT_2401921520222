
class Solution {
public:
void pre(TreeNode* root , vector<int>& ans)
    {
        if(root == NULL) return ;

        
        pre(root->left,ans);
        ans.push_back(root->val);
        pre(root->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        pre(root,v);
        return v;
        
    }
};
