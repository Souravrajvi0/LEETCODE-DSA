class Solution {
public:
    bool check(vector<int>& nums) {
        int def=0;

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<=nums[i+1]){
             continue;
            }else{
             def++;
            }
        }

        if(def!=0&&def<=1&&nums[0]>=nums[nums.size()-1]){
         return true;
        }
        if(def==0){
            return true;
        }
        return false;
        
    }
};