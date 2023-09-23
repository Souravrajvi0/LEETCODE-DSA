class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int low=0;
        int high=nums.size()-1;
        int mid;
        int index=-1;
        while(low<=high){

       mid=low+(high-low)/2;

       int ans=nums[mid]-mid;

       if(ans==0){
           low=mid+1;
       }else{
         index=mid;
         high=mid-1;
       }
}
if(index==-1){
    return nums.size();
}
     return index;
        
    }
};