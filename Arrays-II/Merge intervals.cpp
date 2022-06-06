class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        if(intervals.size()==0)
        {
            return ans;
        }
        sort(intervals.begin(),intervals.end());
        vector<int>t=intervals[0];
        for(auto it:intervals)
        {
            if(it[0]<=t[1])
            {
                t[1]=max(it[1],t[1]);
            }
            else{
                ans.push_back(t);
                t=it;
            }
        }
        ans.push_back(t);
        return ans;
    }
};
