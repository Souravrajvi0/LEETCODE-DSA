class Solution {
public:
    int countPalindromicSubsequence(string s) {
       int n=s.size();
       unordered_map<char,vector<int>>mp;
       for(int i=0;i<n;i++){
        mp[s[i]].push_back(i);
       }
      int ans=0;
      for(auto &pair : mp ){
       int size=pair.second.size();
       if(size>1){
        int l=pair.second[0];
        int r=pair.second[size-1];
        vector<bool>vis(26,false);
        for(int j=l+1;j<r;j++){
            if(vis[s[j]-'a'])continue;
            ans++;
            vis[s[j]-'a']=true;
        }
       }
      }
    return ans;
    }
};