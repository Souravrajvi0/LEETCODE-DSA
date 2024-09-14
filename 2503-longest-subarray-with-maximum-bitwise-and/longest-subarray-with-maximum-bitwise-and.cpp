class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int m=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m=max(nums[i],m);
        }
        int maxl=0;
        int cl=0;
        for(int i=0;i<n;i++){
            if(nums[i]==m){
              cl++;
              if(cl>maxl){
                maxl=cl;
              }
            }else{
                cl=0;
            }
        }
        return maxl;
    }
};