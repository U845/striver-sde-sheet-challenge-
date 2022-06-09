class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>hset;
        for(int num:nums)
        {
            hset.insert(num);
        }
        int longeststreak=0;
        for(int num: nums)
        {
            if(!hset.count(num-1))
            {
                int currentnum=num;
                int currentstreak=1;
                
                while(hset.count(currentnum+1))
                {
                    currentnum+=1;
                    currentstreak+=1;
                }
                longeststreak=max(longeststreak,currentstreak);
            }
        }
        return longeststreak;
    }
};
