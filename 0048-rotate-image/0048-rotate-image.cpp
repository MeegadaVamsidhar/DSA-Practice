class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n= matrix.size();
        // vector<vector<int>> rota(n,vector<int> (n,0));
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         rota[j][n-i-1]=matrix[i][j];
        //     }
        // }

        // int m=rota.size();
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<m;j++){
        //         matrix[i][j]=rota[i][j];
        //     }
        // }

        //transposing
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        //reverse
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};