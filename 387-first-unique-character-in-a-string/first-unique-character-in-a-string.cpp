class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,pair<int,int>>mp;
        for(int i=0;i<s.length();i++){
            if(mp.count(s[i])>0){
            mp[s[i]].second++;
            continue;
            }
            mp[s[i]].first=i;
            mp[s[i]].second++;
        }
      int min=INT_MAX;
      for(auto it :mp){
        int f=it.second.second;
        int index=it.second.first;
        if(f==1){
            if(index<min){
                min=index;
            }
        }
      }
      if(min==INT_MAX)return -1;
      return min;
    }
};