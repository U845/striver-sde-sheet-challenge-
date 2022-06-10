class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        int maximum=0,sum=0;
        unordered_map<int,int>um;
        for(int i=0;i<n;i++)
        {
            sum+=A[i];
            if(sum==0)
            {
                maximum=i+1;
            }
            else{
                if(um.find(sum)!=um.end())
                {
                    maximum=max(maximum,i-um[sum]);
                }
                else{
                    um[sum]=i;
                }
            }
        }
        return maximum;
    }
};
