vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long int n=A.size();
    long long int sum=n*(n+1)/2;
    long long int sqsum=n*(n+1)*(2*n+1)/6;
    int miss=0,repeat=0;
    for(int i=0;i<n;i++)
    {
        sum-=(long long int)A[i];
        sqsum-=(long long int)A[i]*(long long int)A[i];
    }
    miss=(sum+(sqsum/sum))/2;
    repeat=miss-sum;
    vector<int>ans;
    ans.push_back(repeat);
    ans.push_back(miss);
    return ans;
}
