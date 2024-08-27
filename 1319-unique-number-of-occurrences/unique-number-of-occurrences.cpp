class Solution {
public:
  
  
  
  
  
  
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        unordered_set<int>s;
        for(auto it:mp){
           int oc=it.second;
           if(s.find(oc)!=s.end()){
            return false;
           }else{
            s.insert(oc);
           }
        }
        return true;
        
    }
};