class Solution {
public:
    int maxSatisfied(vector<int>& c, vector<int>& g, int m) {
        int n=c.size();
        int prwdc=0;
        for(int i=0;i<m;i++){
            if(g[i]==1) prwdc+=c[i];
        }
        int max=prwdc;
        int i=1;
        int j=m;
        int idx=0;
        while(j<n){
  
       int crwdc=prwdc;
       if(g[j]==1) crwdc+=c[j];
       if(g[i-1]==1)crwdc-=c[i-1];
       if(max<crwdc){
        max=crwdc;
        idx=i;
       }
       i++;
       j++;
       prwdc=crwdc;
         }
        int sum=0;
       for(int i=0;i<n;i++){
        if(g[i]==0)sum+=c[i];
       }
       return max+sum;

    }
};