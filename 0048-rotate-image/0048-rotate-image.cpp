class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n= matrix.size();
        vector<vector<int>> rota(n,vector<int> (n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                rota[j][n-i-1]=matrix[i][j];
            }
        }

        int m=rota.size();
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                matrix[i][j]=rota[i][j];
            }
        }
    }
};