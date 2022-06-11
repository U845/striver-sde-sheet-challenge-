class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0)
        {
            return 0;
        }
        int maxi=INT_MIN;
        unordered_set<int>us;
        int left=0;
        for(int i=0;i<s.length();i++)
        {
            if(us.find(s[i])!=us.end())
            {
                while(left<i && us.find(s[i])!=us.end())
                {
                    us.erase(s[left]);
                    left++;
                }
            }
            us.insert(s[i]);
            maxi=max(maxi,i-left+1);
        }
        return maxi;
    }
};
