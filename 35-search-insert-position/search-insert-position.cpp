class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int index=-1;
        while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
            return mid;
        }else if(nums[mid]<target){
            low=mid+1;
            
        }else{
            index=mid;
            high=mid-1;
            

        }
     







        }
        if(high<low){
            if(high==nums.size()-1){
                return nums.size();
            }
            if(low==0){
                return 0;
            }

        }
        return index;
        
    }
    
};