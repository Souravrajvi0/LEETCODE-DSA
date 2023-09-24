class Solution {
public:
 bool check(vector<int>& nums, int threshold,int mid){
     int sum=0;
     for(int i=0;i<nums.size();i++){
         if(nums[i]%mid==0){
             int a=nums[i]/mid;
             sum=sum+a;

         }else{
             int a=nums[i]/mid;
             sum=sum+a+1;

         }
       
     }
     if(sum<=threshold){
         return true;
     }
     return false;
 }
    int smallestDivisor(vector<int>& nums, int threshold) {
        
       
       int div=-1;

        
        int max=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max=nums[i];
            }
        }
        int low=1;
        int high=max;
        
        while(low<=high){
           int  mid=low+(high-low)/2;

            bool ans=check(nums,threshold,mid);
            if(ans){
             div=mid;
             high=mid-1;

                
            }else{
                low=mid+1;
            }
        }
        return div;
        
    }
};