class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int>mp;
        for(auto s :allowed){
            mp[s]++;
        }
        int count=words.size();
        for(int i=0;i<words.size();i++){
            string s=words[i];
            for(int j=0;j<s.length();j++){
                if(mp.find(s[j])!=mp.end()){
                    continue;
                }else{
                    count--;
                    break;
                }
            }
        }
        return count;
        
    }
};