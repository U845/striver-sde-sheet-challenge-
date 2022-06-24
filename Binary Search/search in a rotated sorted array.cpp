class Solution {
public:
    int getpivot(vector<int>&nums)
    {
        int s=0,e=nums.size()-1;
        while(s<e)
        {
            int mid=(s+e)>>1;
            if(nums[mid]>=nums[0])
            {
                s=mid+1;
            }
            else{
                e=mid;
            }
        }
        return s;
    }
    int binsearch(vector<int>&nums,int s, int e, int key)
    {
        int low=s,hi=e;
        while(low<=hi)
        {
            int mid=(low+hi)>>1;
            if(nums[mid]==key)
            {
                return mid;
            }
            else if(nums[mid]>key)
            {
                hi=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int pivot=getpivot(nums);
        if(target>=nums[pivot] && target<=nums[nums.size()-1])
        {
            return binsearch(nums,pivot,nums.size()-1,target);
        }
       else
       {
           return binsearch(nums,0,pivot-1,target);
       }
        
        return -1;
    }
};
