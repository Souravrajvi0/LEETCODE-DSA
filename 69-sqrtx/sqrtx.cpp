class Solution {
public:
    int mySqrt(int x) {
        int low=1;
        int high =x;
        int res=0;
        int mid;
        if(x<=1){
            return x;
        }
        while(low<=high){
            mid= low+ (high-low)/2;
            if(mid==x/mid){
                return mid;
            }else if(mid>x/mid){
                high=mid-1;
            }else{
                res=mid;
                low=mid+1;
            }
        }
        return res;
        
    }
};