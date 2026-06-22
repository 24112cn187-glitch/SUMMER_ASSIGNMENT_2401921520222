class Solution {
public:
    int nolevels(TreeNode* root) {
        if (root == NULL) return 0;           // empty tree -> 0 levels
        return 1 + max(nolevels(root->left), nolevels(root->right));
    }

    // void nlevel(TreeNode* root, int curr, int level, vector<int>& temp) {
    //     if (root == NULL) return;
    //     if (curr == level) {
    //         temp.push_back(root->val);
    //         return;
    //     }
    //     nlevel(root->left, curr + 1, level, temp);
    //     nlevel(root->right, curr + 1, level, temp);
    // }

    void lorder(TreeNode* root, vector<vector<int>>& ans,int curr) { 
        int n = nolevels(root); 
        if(root==NULL)
        {
            return;
        }

        ans[curr].push_back(root->val);
        lorder(root->left,ans,curr+1);
        lorder(root->right,ans,curr+1);
                  
        
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        int n=nolevels(root);
        for(int i=0;i<n;i++)
        {
            vector<int>a;
            ans.push_back(a);
        }
        if (root == NULL) return ans;
        lorder(root, ans,0);
        return ans;
    }
};
