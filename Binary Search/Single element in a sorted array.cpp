class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0,hi=nums.size()-2;
        while(low<=hi)
        {
            int mid=(low+hi)>>1;
            if(nums[mid]==nums[mid^1])
            {
                low=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return nums[low];
    }
};
