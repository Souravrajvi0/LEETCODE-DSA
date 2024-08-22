class Solution {
public:
  vector<int>dp;
  vector<int>dp1;
    int tp(vector<int>&nums,int i){
       if(i>nums.size()-1)return 0;
       if(i==nums.size()-1)return nums[i];
       if(i==nums.size()-2)return max(nums[i],nums[i+1]);
       if(dp[i]!=-1)return dp[i];
       return dp[i]=max(nums[i]+tp(nums,i+2),tp(nums,i+1));
    }
    int bd(vector<int>&nums){
    int n=nums.size();
    if(n==1)return nums[0];
     dp1[n-1]=nums[n-1];
     dp1[n-2]=max(nums[n-1],nums[n-2]);

     for(int j=n-3;j>=0;j--){
        dp1[j]=max(nums[j]+dp1[j+2],dp1[j+1]);
     }
     return dp1[0];


     



    }
  
  
  
    int rob(vector<int>& nums) {
        dp.clear();
        dp.resize(105,-1);
        dp1.clear();
        dp1.resize(105);
         return  bd(nums);
    


         
    }
};