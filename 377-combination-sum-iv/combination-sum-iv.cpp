class Solution {
public:
  vector<vector<int>>dp;
   int help(vector<int>& nums, int target,int i){
   if(target==0)return 1;
   if(i==nums.size()||target<0)return 0;
   if(dp[target][i]!=-1)return dp[target][i];

   int let=help(nums,target,i+1);
   int keep=0;
   if(nums[i]<=target){
    keep=help(nums,target-nums[i],0);
   }
  return dp[target][i]=let+keep;
   }
   int combinationSum4(vector<int>& nums, int target) {
        dp.clear();
        dp.resize(1004,vector<int>(205,-1));
        return help(nums,target,0);
        
    }
};