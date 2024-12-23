class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int L=0;

        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[L]){
                nums[++L]=nums[i];
            }
        }
        return L+1;
    }
};