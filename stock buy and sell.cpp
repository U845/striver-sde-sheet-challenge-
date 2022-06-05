class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum=INT_MAX;
        int maxiprofit=INT_MIN;
        for(auto it:prices)
        {
            minimum=min(minimum,it);
            maxiprofit=max(maxiprofit,it-minimum);
        }
        return maxiprofit;
    }
};
