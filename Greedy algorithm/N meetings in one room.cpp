class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        int c=1;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            v.push_back(make_pair(end[i],start[i]));
        }
        sort(v.begin(),v.end());
        int limit=v[0].first;
        for(int i=1;i<n;i++)
        {
            if(limit<v[i].second)
            {
                c++;
                limit=v[i].first;
            }
        }
        return c;
    }
};
