class Solution
{
  public:
    void sumof(int i, vector<int>&arr, vector<int>&ans, int size,int sum)
    {
        if(i==size)
        {
            ans.push_back(sum);
            return;
        }
        sumof(i+1,arr,ans,size,sum);
        sumof(i+1,arr,ans,size,sum+arr[i]);
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>ans;
        sumof(0,arr,ans,N,0);
        return ans;
    }
};
