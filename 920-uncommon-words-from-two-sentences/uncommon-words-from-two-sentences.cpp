class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>mp;
        string s="";
        for(int i=0;i<s1.length();i++){
            if(s1[i]==' '){
                mp[s]++;
                s="";
            }else{
                s+=s1[i];
            }
            
           
        }
        mp[s]++;
        s="";
        
        for(int i=0;i<s2.length();i++){
            if(s2[i]==' '){
                mp[s]++;
                s="";
            }else{

            s=s+s2[i];
            }
        }
        mp[s]++;
        
        vector<string>res;
        for(auto ele:mp){
           cout<<ele.first<<ele.second<<"/";
          if(ele.second==1)res.push_back(ele.first);
        }
        return res;
    }
};