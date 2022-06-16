class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<int(nums.size())-2;i++)
        {
            if(i==0 || i>0 && nums[i]!=nums[i-1])
            {
                int lo=i+1, hi=(int)(nums.size())-1, k=0-nums[i];
                while(lo<hi)
                {
                    if(nums[lo]+nums[hi]==k)
                    {
                        vector<int>t;
                        t.push_back(nums[i]);
                        t.push_back(nums[lo]);
                        t.push_back(nums[hi]);
                        ans.push_back(t);
                        
                        while(lo<hi && nums[lo]==nums[lo+1]) lo++;
                        while(lo<hi && nums[hi]==nums[hi-1]) hi--;
                        lo++;
                        hi--;
                    }
                    else if(nums[lo]+nums[hi]<k)
                        lo++;
                    else
                        hi--;
                }
            }
        }
        return ans;
    }
};
