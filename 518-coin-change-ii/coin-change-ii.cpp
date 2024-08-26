class Solution {
public:
    vector<vector<int>>dp;
    int help(int amount, vector<int>& coins,int i){
    if(amount==0)return 1;
    if(amount<0||i>=coins.size())return 0;
    if(dp[amount][i]!=-1)return dp[amount][i];

    int letcw=help(amount,coins,i+1);
    int scw=0;
    if(coins[i]<=amount){
        scw=help(amount-coins[i],coins,i);
    }
    return dp[amount][i]=letcw+scw;



    }
      int change(int amount, vector<int>& coins) {
        dp.clear();
        dp.resize(5005,vector<int>(305,-1));
        
        return help(amount,coins,0);
        
    }
};