class Solution {
public:
   
   int m(string s){
     int hours = (s[0] - '0') * 10 + (s[1] - '0');  
    int minutes = (s[3] - '0') * 10 + (s[4] - '0'); 
        return hours * 60 + minutes;
   }
 int findMinDifference(vector<string>& t) {
        vector<int>minutes;
        for(int i=0;i<t.size();i++){
            minutes.push_back(m(t[i]));
        }
        sort(minutes.begin(),minutes.end());
        int mintimed=INT_MAX;
        for(int i=1;i<minutes.size();i++){
            if(minutes[i]-minutes[i-1]<mintimed){
                mintimed=minutes[i]-minutes[i-1];
            }
        }
       int ftl=1440-minutes[minutes.size()-1]+minutes[0];
       if(ftl<mintimed){
        mintimed=ftl;
       }
        return mintimed;
    }
};