class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int>prefix(n,0);
        prefix[0]=0;
        int minop=0;
        int cballs=(boxes[0]-'0');
        for(int i=1;i<n;i++){
          minop=cballs+prefix[i-1];
          prefix[i]=minop;
          cballs+=(boxes[i]-'0');  
        }

        vector<int>suffix(n,0);
        suffix[n-1]=0;
        int min=0;
        cballs=(boxes[n-1]-'0');
        for(int i=n-2;i>=0;i--){
            min=cballs+suffix[i+1];
            suffix[i]=min;
            cballs+=(boxes[i]-'0');
        }
        
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            ans[i]=prefix[i]+suffix[i];
        }
        return ans;
    }
};