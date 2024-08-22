class Solution {
public:
vector<vector<int>>dp;
   int help(vector<vector<int>>& grid,int i,int j){
    if(i>grid.size()-1)return 10000;
    if(j>grid[0].size()-1)return 10000;
    if(i==grid.size()-1&&j==grid[0].size()-1)return grid[i][j] ;
    if(dp[i][j]!=-1)return dp[i][j];
    
    int right=grid[i][j]+help(grid,i,j+1);
    int down=grid[i][j]+help(grid,i+1,j);
    
    return dp[i][j]=min(right,down);
}
     int minPathSum(vector<vector<int>>& grid) {
        dp.clear();
        int m= grid.size();
        int n=grid[0].size();
         dp.resize(m,vector<int>(n,-1));
        return help(grid,0,0);
        
    }
};