class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>minhp(nums.begin(),nums.end());
       int sum=0;
       for(int i=0;i<nums.size();i++)sum+=nums[i];
       while(k--){
          int el=minhp.top();
          if(el==0)break;
          minhp.pop();
          sum-=el;
          minhp.push(-el);
          sum+=(-el);
        }
        return sum;

    }
};