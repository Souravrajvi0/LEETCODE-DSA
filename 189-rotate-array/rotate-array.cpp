class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n=nums.size();
        k%=n;

        vector<int>res(n);
        int i;
        for( i=0;i+k<n;i++){
          res[i+k]=nums[i];
        }
        for(int j=0;i<n;i++,j++){
            res[j]=nums[i];
        }
        nums=res;


        
    }
};