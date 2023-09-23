class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int sum=0;
      int targetsum=0;
      for(int i=1;i<=nums.size();i++){
          sum=sum+i;
      }
      for(int i=0;i<nums.size();i++){
          targetsum=nums[i]+targetsum;
      }
      return sum-targetsum;
       
        
    }
};