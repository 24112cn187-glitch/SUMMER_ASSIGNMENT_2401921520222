class Codec {
public:

   
    string serialize(TreeNode* root) {

        if(root == NULL)
            return "";

        queue<TreeNode*> q;
        q.push(root);

        string ans;

        while(!q.empty())
        {
            TreeNode* node = q.front();
            q.pop();

            if(node == NULL)
            {
                ans += "null,";
            }
            else
            {
                ans += to_string(node->val) + ",";
                q.push(node->left);
                q.push(node->right);
            }
        }

        return ans;
    }

    TreeNode* deserialize(string data) {

        if(data.empty())
            return NULL;

        stringstream ss(data);
        string str;

        getline(ss, str, ',');

        TreeNode* root = new TreeNode(stoi(str));

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            TreeNode* node = q.front();
            q.pop();

            
            if(getline(ss, str, ','))
            {
                if(str != "null")
                {
                    node->left = new TreeNode(stoi(str));
                    q.push(node->left);
                }
            }

            if(getline(ss, str, ','))
            {
                if(str != "null")
                {
                    node->right = new TreeNode(stoi(str));
                    q.push(node->right);
                }
            }
        }

        return root;
    }
};
