class Solution {
public:
    bool caneat(vector<int>& piles, int h,int mid){
          int long long hr=0;
          for(int i=0;i<piles.size();i++){
              if(piles[i]<=mid){
               hr++;
               continue;
              }
              long long int a=piles[i]+mid-1;
                     a=a/mid;
              
                hr+=a;
                
           

          }
          if(hr<=h){
              return true;
          }
          return false;
        
        

    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int max=INT_MIN;
        int k=-1;
        for(int i=0;i<piles.size();i++){
            if(piles[i]>max){
                max=piles[i];
            }
        }
        int low=1;
        int high=max;
        int mid;
        while(low<=high){
        
        mid=low+(high-low)/2;

        bool ans=caneat(piles,h,mid);

        if(ans){
            
         k=mid;
         high=mid-1;

        }else{
        low=mid+1;

        }
      }
        return k;
        
    }
};