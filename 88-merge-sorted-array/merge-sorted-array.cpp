class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>res(n+m);
        int i=0;
        int j=0;
        int k=0;
        while(i<m&&j<n){
            int ele1=nums1[i];
            int ele2=nums2[j];
            if(ele1<=ele2){
                res[k]=ele1;
                i++;
            }else{
                res[k]=ele2;
                j++;
            }
            k++;
        }
        if(i==m){
            while(j<n){
                res[k]=nums2[j];
                j++;
                k++;
            }
        }else{
             while(i<m){
                res[k]=nums1[i];
                i++;
                k++;
            }
        }
        nums1=res;
    }
};