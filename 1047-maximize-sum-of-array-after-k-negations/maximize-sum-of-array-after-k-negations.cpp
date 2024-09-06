class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        while(k>0){
           pair<int,int>min=make_pair(nums[0],0);
          for(int i=1;i<nums.size();i++){
             if(min.first>nums[i]){
                 min.first=nums[i];
                 min.second=i;
             }
          }
          nums[min.second]*=-1;
          k--;
        }
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        return sum;
    }
};