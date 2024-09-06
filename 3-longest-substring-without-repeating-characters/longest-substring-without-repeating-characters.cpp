class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int j=0;
        int count=0;
        int maxl=0;
        int n=s.length();
        unordered_map<char,int>mp;
        while(j<n){
        mp[s[j]]++;
        if(mp[s[j]]>1)count++;

        if(count==0){
            maxl=max(maxl,j-i+1);
            j++;
        }else if(count!=0){
          while(count!=0){
            mp[s[i]]--;
            if(mp[s[i]]==1)count--;
            i++;
          }
          if(count==0){
            maxl=max(maxl,j-i+1);
          }
          j++;
      }
   }
    return maxl; 
    }
};