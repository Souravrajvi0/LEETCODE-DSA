class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int n=nums.size();
    int arrsum=0;
    for(int i=0;i<n;i++){
      arrsum+=nums[i];
    }
    int sum=n*(n+1)/2;
    return sum-arrsum;   
    }
};