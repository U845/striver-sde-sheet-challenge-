class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        
        if(root==NULL)
            return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            vector<int>v;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
            TreeNode* t=q.front();
            q.pop();
            if(t->left)
                q.push(t->left);
            if(t->right)
                q.push(t->right);
            v.push_back(t->val);
            }
            
            ans.push_back(v);
        }
        
        return ans;
    }
};
