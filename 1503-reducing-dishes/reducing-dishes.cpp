class Solution {
public:
    int maxSatisfaction(vector<int>& s) {
        sort(s.begin(),s.end());
        int n=s.size();
        vector<int>sf(n);
        sf[n-1]=s[n-1];
        for(int i=n-2;i>=0;i--){
            sf[i]=sf[i+1]+s[i];
        }
        int time=1;
        int lti=0;
       for(int i=0;i<n;i++){
        if(sf[i]<0)continue;
        lti+=time*s[i];
        time++;
        }
        return lti;
        
    }
};