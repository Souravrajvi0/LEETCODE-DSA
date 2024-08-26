class Solution {
public:
    const int mod=int(1e9+7);
    int dp[51][51][51];
    int help(int m, int n, int mm, int i, int j){
        
     if(i>=m||j>=n||i<0||j<0)  {
       if(mm>=0)
       return 1;
       }
     if(mm<0)return 0;  
     if(dp[i][j][mm]!=-1)return dp[i][j][mm];
     

    int downm=help(m,n,mm-1,i+1,j)%mod;
    int topm=help(m,n,mm-1,i-1,j)%mod;
    int leftm=help(m,n,mm-1,i,j-1)%mod;
    int rightm=help(m,n,mm-1,i,j+1)%mod;
     dp[i][j][mm] = ((downm + topm) % mod + (leftm + rightm) % mod) % mod;
    return dp[i][j][mm];
}
      int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
     memset(dp,-1,sizeof(dp));
     return help(m,n,maxMove,startRow,startColumn);
        
    }
};