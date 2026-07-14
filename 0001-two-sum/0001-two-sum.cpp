class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        vector<int> ans;

        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]+nums[j] == target){
        //             ans.push_back(i);
        //             ans.push_back(j);
        //             return ans;
        //         }
        //     }
        // }
        // return{-1, -1};

        //2-Pointer
        vector<vector<int>> eleIndex;
        for(int i=0;i<n;i++){
            eleIndex.push_back({nums[i], i});
        }

        sort(eleIndex.begin(),eleIndex.end(), [](const vector<int>& a, const vector<int>& b){
            return a[0]<b[0];
        });

        int le =0,ri=n-1;

        while(le < ri){
            int sum =eleIndex[le][0] + eleIndex[ri][0];

            if(sum == target){
                ans.push_back(eleIndex[le][1]);
                ans.push_back(eleIndex[ri][1]);
                return ans;
            }else if(sum < target){
                le ++;
            }else{
                ri--;
            }
        }
        return {-1, -1};
    }
};