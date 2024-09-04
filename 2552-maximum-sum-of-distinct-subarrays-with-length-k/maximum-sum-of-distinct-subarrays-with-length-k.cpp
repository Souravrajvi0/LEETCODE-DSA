class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        int i=0;
        int j=0;
        int n=nums.size();
        long long  int sum=0;
        unordered_map<int,int>m;
        long long int msum=INT_MIN;
        int count=0;
        while(j<n){
        if(m[nums[j]]>=1)count++;
          m[nums[j]]++;
          sum+=nums[j];
        if(j-i+1<k){
           j++;
        }else if(j-i+1==k){
         if(count==0){
            if(sum>msum){
                msum=sum;
            }
         }
         int f=m[nums[i]];
         if(f>1){
            count--;
         }
         m[nums[i]]--;
         sum-=nums[i];
         i++;
         j++;
       }
      }
      return (msum!=INT_MIN) ? msum : 0;
        
    }
};