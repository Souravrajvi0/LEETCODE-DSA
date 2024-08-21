class Solution {
public:
    
   int ans(int n,int dp[]){
    if(n==0)return 0;
    if(n==1)return 1;
    if(n==2)return 1;
    if(dp[n]!=-1)return dp[n];
    return dp[n]=ans(n-1,dp)+ans(n-2,dp)+ans(n-3,dp);
   }
      int tribonacci(int n) {
        int dp[n+100];
    for (int i = 0; i<=n; i++) {
        dp[i] = -1;
         }
        return ans(n,dp);
    }
};