class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat.size();
        int m =mat[0].size();

        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         if(mat[i][j]==target){
        //             return true;
        //         }
        //     }
        // }
        // return false;

        int lo=0,hi=n*m -1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            int row=mid/m,col = mid %m;

            if(mat[row][col] == target) 
                return true;
            else if(mat[row][col]<target) 
                lo = mid +1;
            else 
                hi = mid-1;
        } 
        return false;
    }
};