class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=0;
        int high=arr.size()-1;
        int mid;
        int index=-1;
        while(low<=high){
          mid=low+(high-low)/2;
          if(mid==arr.size()-1){
              break;
          }
          if(arr[mid]<arr[mid+1]){
              low=mid+1;
          }else{
              index=mid;
              high=mid-1;

          }

         }
         return index;
        
    }
};