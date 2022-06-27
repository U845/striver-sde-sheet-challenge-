class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int>ans;
        if(root==NULL)
        {
            return ans;
        }
        queue<pair<Node *, int>>q;
        q.push({root,0});
        map<int,int>m;
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            Node *t=it.first;
            int line=it.second;
            if(m.find(line)==m.end())
            {
                m[line]=t->data;
            }
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
