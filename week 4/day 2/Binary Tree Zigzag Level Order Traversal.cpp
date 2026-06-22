
class Solution {
public:


     int nolevels(TreeNode* root) {
        if (root == NULL) return 0;           
        return 1 + max(nolevels(root->left), nolevels(root->right));
    }

    void nlevel(TreeNode* root, int curr, int level, vector<int>& temp) {
        if (root == NULL) return;
        if (curr == level) {
            temp.push_back(root->val);
            return;
        }
        if(level%2==0)
        {
            nlevel(root->left, curr + 1, level, temp);
            nlevel(root->right, curr + 1, level, temp);
            
             
        }else 
        {
            nlevel(root->right, curr + 1, level, temp);
            nlevel(root->left, curr + 1, level, temp);
            
           
           
        }
        
    }

    void lorder(TreeNode* root, vector<vector<int>>& ans) { 
        int n = nolevels(root);           
        for (int i = 0; i < n; ++i) {    
            vector<int> v;
            nlevel(root, 0, i, v);       
            ans.push_back(v);
        }
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

         vector<vector<int>> ans;
        if (root == NULL) return ans;
        lorder(root, ans);
        return ans;
        
    }
};
