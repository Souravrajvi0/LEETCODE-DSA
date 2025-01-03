class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        vector<long long int>prefix(nums.size());
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        vector<long long int>suffix(nums.size());
        suffix[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suffix[i]=suffix[i+1]+nums[i];
        }
 
        int splits=0;
        for(int i=0;i<n-1;i++){
            if(prefix[i]>=suffix[i+1]){
                splits++;
            }
        }
        return splits;
    }
};