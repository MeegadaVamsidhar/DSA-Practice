class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for (int i = 0; i < numRows; i++) {
            vector<int> row;
            for (int j = 0; j <= i; j++) {
                row.push_back(nCr(i, j));
            }
            ans.push_back(row);
        }

        return ans;
    }

private:
    int nCr(int n,int r){
        if(r>n-r) r=n-r;

        if(r==1) return n;

        int res=1;
        for(int i=0;i<r;i++){
            res= res*(n-i);
            res = res/(i+1);
        }
        return res;
    }
};