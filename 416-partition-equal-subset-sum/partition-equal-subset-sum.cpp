class Solution {
public:
    vector<vector<int>>dp;
    bool help(vector<int>&nums,int sum,int i){
     if(sum==0)return true;
     if(sum<0||i>nums.size()-1)return false;
     if(dp[sum][i]!=-1)return dp[sum][i];
     bool picks=false;
     if(nums[i]<=sum)picks=help(nums,sum-nums[i],i+1);
     bool lets=help(nums,sum,i+1);
     return dp[sum][i]=(picks||lets);
    


   
}
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            }
        if(sum%2!=0)return false;
        dp.clear();
        dp.resize(sum+2,vector<int>(nums.size()+2,-1));
        return help(nums,sum/2,0);

        
    }
};