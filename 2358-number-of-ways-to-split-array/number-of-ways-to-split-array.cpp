class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        long long int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        long long int leftsum=0;
        long long int rightsum=sum;
        int splits=0;

        for(int i=0;i<n-1;i++){
         leftsum+=nums[i];
         rightsum-=nums[i];
         if(leftsum>=rightsum){
           splits++;
         }
        }
        return splits;
    }
};