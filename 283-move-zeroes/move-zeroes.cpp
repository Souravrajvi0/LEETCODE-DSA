class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        //LETS FIND THE FIRST ZERO INDEX

        int n=nums.size();
        int i=0;
        for(;i<n;i++){
           if(nums[i]==0)break;
        }
        if(i==n-1||i==n)return;
        int j=i+1;
        for(;j<n;j++){
            if(nums[j]!=0){
              swap(nums[i],nums[j]);
              i++;
            }
        }
        
    }
};