bool canplace(vector<int>positions, int n, int c, int mid)
{
    int cnt=1;
    int prevcow=positions[0];
    for(int i=1;i<n;i++)
    {
        if(positions[i]-prevcow>=mid)
        {
            cnt++;
            prevcow=positions[i];
        }
    }
    if(cnt>=c)
    {
        return true;
    }
    return false;
}
int chessTournament(vector<int> positions , int n ,  int c){
	// Write your code here
    sort(positions.begin(),positions.end());
    int ans=0;
    int low=1,hi=positions[n-1]-positions[0];
    while(low<=hi)
    {
        int mid=(low+(hi-low)/2);
        if(canplace(positions,n,c,mid))
        {
            ans=mid;
            low=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    return ans;
}
