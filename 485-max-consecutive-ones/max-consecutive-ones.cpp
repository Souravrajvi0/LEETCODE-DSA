class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0;
        int cn=0;
        int n=nums.size();
        for(int i =0;i<n;i++){
            if(nums[i]==1){
                cn++;
                if(cn>max){
                    max=cn;
                }
            }else{
                cn=0;
            }
        }
        return max;
    }
};