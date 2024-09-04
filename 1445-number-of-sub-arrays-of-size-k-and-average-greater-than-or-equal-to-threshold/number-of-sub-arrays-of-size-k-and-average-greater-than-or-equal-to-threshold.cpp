class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int t) {
        int i=0;
        int n=arr.size();
        int j=0;
        int avg=0;
        int sum=0;
        int count=0;
        while(j<n){
        sum+=arr[j];
        
        if(j-i+1<k){
            j++;
        }else if(j-i+1==k){
            avg=sum/k;
        if(avg>=t)count++;
        sum-=arr[i];
        i++;
        j++;
    }
 }
 return count;
    }
};