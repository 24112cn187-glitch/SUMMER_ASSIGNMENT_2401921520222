
class Solution {
public:

    bool helper(TreeNode* root, int targetSum,int currsum)
    {
        if(root==NULL) return false;
        if(root->left==NULL && root->right==NULL)
        {
            if(currsum+root->val==targetSum) return true;

        }
       return helper(root->left,targetSum,currsum+root->val) || helper(root->right,targetSum,currsum+root->val);
        
    }

    
    bool hasPathSum(TreeNode* root, int targetSum) {

       return helper(root,targetSum,0);
    }
};
