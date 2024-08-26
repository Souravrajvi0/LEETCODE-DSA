class Solution {
public:
   
   
   
   
   
   
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string>s;
        int result=0;
        for(int i=0;i<words.size();i++){
            s.insert(words[i]);
        }
        for(int i=0;i<words.size();i++){
            string s1=words[i];
            reverse(s1.begin(),s1.end());
            if(s1==words[i])continue;
            if(s.find(s1)!=s.end()){
                result+=1;
                s.erase(words[i]);
            }
        }
        return result;

        
    }
};