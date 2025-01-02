class Solution {
public:
  bool check(string s){
  if(s[0]!='a'&&s[0]!='e'&&s[0]!='o'&&s[0]!='i'&&s[0]!='u'){
    return false;
  }
  if(s[s.size()-1]!='a'&&s[s.size()-1]!='e'&&s[s.size()-1]!='o'&&s[s.size()-1]!='i'&&s[s.size()-1]!='u'){
    return false;
  }
 return true;
  }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        
     vector<int>ans;
     vector<int>prefix(words.size(),0);

     if(check(words[0])){
        prefix[0]=1;
     }

     for(int i=1;i<words.size();i++){
     if(check(words[i])){
        prefix[i]=1+prefix[i-1];
      }
     else{
        prefix[i]=prefix[i-1];
         }
      }

    for(int i=0;i<queries.size();i++){
       int l=queries[i][0];
       int r=queries[i][1];

       if(l==0){
        ans.push_back(prefix[r]);
       }else{
        ans.push_back(prefix[r]-prefix[l-1]);
       }
    }
    return ans;
    }
};