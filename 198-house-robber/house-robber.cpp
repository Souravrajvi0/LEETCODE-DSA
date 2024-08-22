class Solution {
public:
  vector<int>dp;
    int tp(vector<int>&nums,int i){
       if(i>nums.size()-1)return 0;
       if(i==nums.size()-1)return nums[i];
       if(i==nums.size()-2)return max(nums[i],nums[i+1]);

       if(dp[i]!=-1)return dp[i];

       return dp[i]=max(nums[i]+tp(nums,i+2),tp(nums,i+1));


    }
  
  
  
  
    int rob(vector<int>& nums) {
        dp.clear();
        dp.resize(105,-1);
         return tp(nums,0);
    


         
    }
};