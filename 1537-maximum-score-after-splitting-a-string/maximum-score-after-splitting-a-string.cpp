class Solution {
public:
  int findZ(string s, int i){
   int num=0;
   for(int j=0;j<=i;j++){
   if(s[j]=='0')num++;
   }
  
  return num;
  }

  int findO(string s, int i){
   int num=0;
   for(int j=i+1;j<s.size();j++){
   if(s[j]=='1')num++;
    }

    return num;
  }

int maxScore(string s) {
   int maxScore=0;
   for(int i=0;i<s.size()-1;i++){
     int scoreL=findZ(s,i);
     int scoreR=findO(s,i);
     maxScore=max(maxScore,scoreL+scoreR);
   }
   return maxScore;    
    }
};