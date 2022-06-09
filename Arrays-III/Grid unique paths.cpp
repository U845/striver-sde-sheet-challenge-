class Solution {
public:
    int uniquePaths(int m, int n) {
        int N_steps=m+n-2;
        int right=n-1;
        double ans=1;
        for(int i=1;i<=right;i++)
        {
            ans=ans*(N_steps-right+i)/i;
        }
        return ans;
    }
};
