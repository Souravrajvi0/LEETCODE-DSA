class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>res(n+m);
        int i=0;
        int j=0;
        int k=0;
        while(i<m&&j<n){
            if(nums1[i]<=nums2[j]){
                res[k++]=nums1[i++];
            }else{
                res[k++]=nums2[j++];
            }
        }
        if(i==m){
            while(j<n){
                res[k++]=nums2[j++];
            }
        }else{
             while(i<m){
                res[k++]=nums1[i++];
            }
        }
       nums1=res;
    }
};