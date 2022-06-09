class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0,ele=0;
        for(auto it : nums)
        {
            if(c==0)
            {
                ele=it;
            }
            if(it==ele)
            {
                c+=1;
            }
            else{
                c-=1;
            }
                
        }
        return ele;
    }
};
