class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0,maxcnt=0;
        int n= nums.size();

        for(int i=0;i<n;i++){
            if(nums[i]==1){
                cnt+=1;
                maxcnt = max(cnt,maxcnt);
            }
            else cnt =0;
        }
        return maxcnt;
    }
};