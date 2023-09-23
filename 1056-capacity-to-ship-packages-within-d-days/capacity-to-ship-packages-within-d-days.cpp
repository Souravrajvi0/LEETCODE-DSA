class Solution {
public:
bool check(vector<int>& weights, int days,int mid){
    int sum=0;
    int day=1;
    for(int i=0;i<weights.size();i++){
     if(weights[i]>mid){
         return false;
     }
     sum=sum+weights[i];
     if(sum>mid){
         day++;
         sum=0;
         i--;
        }
        
        

}
if(day<=days){
            return true;
        }
        return false;
        
}
    

    int shipWithinDays(vector<int>& weights, int days) {
        int maxcap=0;
        for(int i=0;i<weights.size();i++){
            maxcap=weights[i]+maxcap;
        }
        int cap=-1;
        int low=1;
        int high=maxcap;
        int mid;

        while(low<=high){

      mid=low+(high-low)/2;
      bool ans= check(weights,days,mid);

      if(ans){
          cap=mid;
          high=mid-1;
      }else{
          low=mid+1;
      }

 }
 return cap;
        
    }
};