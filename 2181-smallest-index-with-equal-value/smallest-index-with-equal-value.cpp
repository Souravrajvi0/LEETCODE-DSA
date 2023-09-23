class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int t=i%10;
            if(t==nums[i]){
                return i;
            }
        }
        return -1;
        
    }
};