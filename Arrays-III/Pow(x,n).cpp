class Solution {
public:
    double myPow(double x, int n) {
        double res=1.0;
        long long neg=n;
        if(neg<0) neg=neg*(-1);
        while(neg)
        {
            if(neg%2)
            {
                res=res*x;
                neg-=1;
            }
            else{
                x=x*x;
                neg=neg/2; 
            }
            
        }
        if(n<0)
        {
            res=(double)1.0/(double)res;
        }
        return res;
    }
};
