class Solution {
public:
    vector<vector<int>>dp;
    int help(vector<int>& nums, int target,int i,int cs){
    if(i==nums.size()){
        if(cs==target){
            return 1;
        }else{
            return 0;
        }

    }
    int css=cs+2000; // Shift cs by 2000 to avoid negative indices
        
        // Check if the subproblem is already solved
        if(dp[i][css] != -1) {
            return dp[i][css];
        }
   

      int nump=help(nums,target,i+1,cs+nums[i]);
      int numn=help(nums,target,i+1,cs-nums[i]);
     
      return dp[i][css]=nump+numn;  // if cs<0 then what do we need to do





    }
    int findTargetSumWays(vector<int>& nums, int target) {
        
        dp.clear();
        int sum=0;
        dp.resize(25,vector<int>(4001,-1));
        return help(nums,target,0,0);
        
    }
};