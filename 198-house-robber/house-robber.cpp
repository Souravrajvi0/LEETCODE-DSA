class Solution {
public:
    int maxs(vector<int>&nums,int i,vector <int>&dp){
    if(i==nums.size()-1)return nums[i];
    if(i==nums.size()-2)return max(nums[i],nums[i+1]);
    if(dp[i]!=-1)return dp[i];
    
    return dp[i]= max(nums[i]+maxs(nums,i+2,dp),maxs(nums,i+1,dp));
 }
    int rob(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        vector <int> dp(nums.size());
        dp[nums.size()-1]=nums[nums.size()-1];
        dp[nums.size()-2]=max(nums[nums.size()-1],nums[nums.size()-2]);

        for(int i=nums.size()-3;i>=0;i--){
            dp[i]=max(dp[i+1],nums[i]+dp[i+2]);
        }
        return dp[0];
        
    }
};