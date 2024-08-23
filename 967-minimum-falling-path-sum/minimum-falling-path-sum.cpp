class Solution {
public:
vector<vector<int>>dp;
   int help(vector<vector<int>>& matrix,int i,int j,vector<vector<int>>&dp){
    if(j<0||j>matrix[0].size()-1||i>matrix.size()-1) return 10000;
    if(dp[i][j]!=-2)return dp[i][j];
    if(i==matrix.size()-1)return matrix[i][j];

    int right=matrix[i][j]+help(matrix,i+1,j+1,dp);
    int left=matrix[i][j]+help(matrix,i+1,j-1,dp);
    int down=matrix[i][j]+help(matrix,i+1,j,dp);

  return dp[i][j]=min({right,left,down}); 
}
int minFallingPathSum(vector<vector<int>>& matrix) {
        int minsum=INT_MAX;
        int i=0;
        dp.clear();
        dp.resize(matrix.size(),vector<int>(matrix[0].size(),-2));
        for(int j=0;j<matrix[0].size();j++){
        int sub=help(matrix,i,j,dp);
        if(sub<minsum){
            minsum=sub;
        }
    }
    return minsum;
    }
};