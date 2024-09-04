class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int n=nums.size();
        double maxav=INT_MIN;
        double sum=0;
        double avg=0;
        while(j<n){
         sum+=nums[j];
         
       if(j-i+1<k){
        j++;
       }else if (j-i+1==k){
        avg=sum/k;
        if(avg>maxav){
            maxav=avg;
        }
        sum-=nums[i];
        i++;
        j++;
       }
}
   return maxav;
        
    }
};