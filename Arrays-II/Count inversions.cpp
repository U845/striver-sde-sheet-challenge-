long long merge(long long *arr,int left,int mid, int right, long long t[])
{
    int i=left,j=mid,k=left;
    long long inv_count=0;
    while((i<=mid-1)&&(j<=right))
    {
        if(arr[i]<=arr[j])
        {
            t[k++]=arr[i++];
        }
        else{
            t[k++]=arr[j++];
            inv_count+=(mid-i);
        }
    }
    while(i<=mid-1)
    {
        t[k++]=arr[i++];
    }
    while(j<=right)
    {
        t[k++]=arr[j++];
    }
    for(int i=left;i<=right;i++)
    {
        arr[i]=t[i];
    }
    return inv_count;
}

long long mergesort(long long *arr, int left, int right, long long t[])
{
    long long inv_count=0;
    int mid;
    if(right>left)
    {
        mid=(left+right)/2;
        inv_count+=mergesort(arr,left,mid,t);
        inv_count+=mergesort(arr,mid+1,right,t);
        inv_count+=merge(arr,left,mid+1,right,t);
    }
    return inv_count;
}

long long getInversions(long long *arr, int n){
    // Write your code here.
    long long t[n];
    long long ans=mergesort(arr,0,n-1,t);
    return ans;
}
