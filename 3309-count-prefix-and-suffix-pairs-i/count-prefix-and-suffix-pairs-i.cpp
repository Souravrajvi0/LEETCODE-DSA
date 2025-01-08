class Solution {
public:
   bool isPrefixAndSuffix(string s1, string s2){
    if(s1.size()>s2.size()){
        return false;
    }
    if(s2.compare(0,s1.size(),s1)!=0){
    return false;
    } 
    if(s2.compare(s2.size()-s1.size(),s1.size(),s1)!=0){
    return false;
    }
    return true;
   }


    int countPrefixSuffixPairs(vector<string>& words) {
        int count=0;
        for(int i = 0; i < words.size(); i++){
            for(int j = i+1; j <words.size(); j++){
                if(isPrefixAndSuffix(words[i],words[j])){
                    count++;
                }
            }
        }
        return count;
        
    }
};