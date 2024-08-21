class Solution {
public:

    int findmin(vector<int>& cost,int i,vector<int>& dp){
        if(i>=cost.size())return 0;
        if(dp[i]!=-1)return dp[i];

        int sumofchoice1=cost[i]+findmin(cost,i+1,dp);
        int sumofchoice2=cost[i]+findmin(cost,i+2,dp);
        dp[i]=min(sumofchoice1,sumofchoice2);
        return dp[i];
 }

int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size(),-1);
        return min (findmin(cost,0,dp),findmin(cost,1,dp));
        }
};