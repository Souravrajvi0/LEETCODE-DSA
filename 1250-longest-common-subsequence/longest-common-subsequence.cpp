class Solution {
public:
vector<vector<int>>dp;
   int help(string &text1, string& text2,int i,int j){
    if(i<0||j<0)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    if(text1[i]==text2[j]){
    return dp[i][j]= 1+ help(text1,text2,i-1,j-1);
    }
    return dp[i][j]=max(help(text1,text2,i-1,j),help(text1,text2,i,j-1));
    }
   int longestCommonSubsequence(string text1, string text2) {
    dp.clear();
    dp.resize(1004,vector<int>(1004,-1));
    return help(text1,text2,text1.length()-1,text2.length()-1);
}
};