class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int>vis(n+1,0);
        for(int i=0;i<n;i++){
            vis[nums[i]]=1;
        }
        int res;
        for(int i=0;i<n+1;i++){
            if(vis[i]==0){
                res=i;
                break;
            }
        }
       return res;
        
    }
};