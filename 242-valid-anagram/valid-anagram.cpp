class Solution {
public:
   
   
   
   
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;

        for(int i=0;i<s.length();i++){
         mp1[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
         mp2[t[i]]++;
        }
       for(auto i:mp1){
        char c1=i.first;
        int f1= i.second;
        if(mp2.find(c1)!=mp2.end()){
            int f2=mp2[c1];
            if(f1!=f2)return false;
        }else{
            return false;
        }
       }
       return true;
       

        
    }
};