class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int>ans;
        if(root==NULL)
        {
            return ans;
        }
        queue<pair<Node*, int>>q;
        q.push({root,0});
        map<int,int>m;
        
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            
            Node *t=it.first;
            int line=it.second;
            
            m[line]=t->data;
            
            if(t->left)
            {
                q.push({t->left,line-1});
            }
            if(t->right)
            {
                q.push({t->right,line+1});
            }
        }
        for(auto it:m)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};
