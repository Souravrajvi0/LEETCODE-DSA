class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int mid;

        while(low<=high){

        mid=low+(high-low)/2;
        if(nums[mid]==target){
            return mid;
        }
             // upar wala part
        if(nums[mid]>=nums[low]){
            if(nums[mid]<=target){
                low=mid+1;
            }else if(nums[mid]>=target&&target>=nums[low]){
                high=mid-1;
            }else if(nums[mid]>=target&&target<=nums[low]){
                low=mid+1;
            }

  }else{
                   // niche wala part
             if(nums[mid]>=target){
                 high=mid-1;
             } else if(target>=nums[mid]&&target<=nums[nums.size()-1]){
                 low=mid+1;
             }else if(target>=nums[mid]&&target>=nums[nums.size()-1]){
                 high=mid-1;
             }
 }
}
return -1;
        
        
    }
};