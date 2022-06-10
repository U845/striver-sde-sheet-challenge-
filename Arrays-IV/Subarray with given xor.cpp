int Solution::solve(vector<int> &A, int B) {
    unordered_map<int,int>um;
    int xr=0;
    long long c=0;
    for(int i=0;i<A.size();i++)
    {
        xr=xr^A[i];
        if(xr==B)
        {
            c++;
        }
        int h=xr^B;
        if(um.find(h)!=um.end())
        {
            c=c+um[h];
        }
        um[xr]++;
    }
    return c;
}
