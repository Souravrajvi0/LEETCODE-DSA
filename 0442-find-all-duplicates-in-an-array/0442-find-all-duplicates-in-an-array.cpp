class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
      vector <int> arr(nums.size()*2,0);
      vector <int> arr1;
      for(int i=0;i<nums.size();i++){
         int index=nums[i];
         arr[index]++;
         if(arr[index]>1){
           arr1.push_back(nums[i]);
         }


      }
      return arr1;
    }

      
};