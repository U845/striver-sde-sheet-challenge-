class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size())
        {
            return false;
        }
        int rows=matrix.size(),cols=matrix[0].size();
        int s=0,e=rows*cols-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(matrix[mid/cols][mid%cols]==target)
            {
                return true;
            }
            else if(matrix[mid/cols][mid%cols]<target)
            {
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return false;
    }
};
