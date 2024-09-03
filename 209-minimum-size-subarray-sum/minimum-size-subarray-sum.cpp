class Solution {
public:
  bool help(int k,vector<int>& nums,int target){
   int prevs=0;
   for(int i=0;i<k;i++){
    prevs+=nums[i];
   }
   if(prevs>=target)return true;

   int i=1;
   int j=k;
   while(j<nums.size()){
     int curs=prevs+nums[j]-nums[i-1];
     if(curs>=target){
        return true;
     }
     i++;
     j++;
     prevs=curs;
     }
 return false;

}

  int minSubArrayLen(int target, vector<int>& nums) {
    int left = 1;
    int right = nums.size();
    int result = INT_MAX;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (help(mid, nums, target)) {
            result = mid;
            right = mid - 1; // Check for smaller lengths
        } else {
            left = mid + 1; // Check for larger lengths
        }
    }
    
    return result == INT_MAX ? 0 : result; //;

    }
};