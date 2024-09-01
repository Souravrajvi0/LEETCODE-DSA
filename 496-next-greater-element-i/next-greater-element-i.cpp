class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        for(int i=0;i<nums1.size();i++){
           int num=nums1[i];
           bool found=false;
           int nge=-1;
          for(int j=0;j<nums2.size();j++){
           if(nums2[j]==nums1[i]){
            found =true;
           }
           if(found&&nums2[j]>nums1[i]){
            nge=nums2[j];
            break;
           }
         }
          res.push_back(nge);
       }
     return res;
    }
};