class Solution {
public:
    int maximumUnits(vector<vector<int>>& b, int ts) {
        priority_queue<pair<int,int>>maxhp;
        for(int i=0;i<b.size();i++){
           int numb=b[i][0];
           int numu=b[i][1];
           maxhp.push({numu,numb});
        }
        int max=0;
        while(ts--&& !maxhp.empty()){
        pair<int,int>p=maxhp.top();
        if(p.second==1){
            max+=p.first;
            maxhp.pop();
        }else{
        max+=p.first;
        maxhp.pop();
        maxhp.push({p.first,p.second-1});
        }
     }
      return max;
        
    }
};