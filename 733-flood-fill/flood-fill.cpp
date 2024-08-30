class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& i, int sr, int sc, int c) {
        int oc=i[sr][sc];
        if(i[sr][sc]==c)return i;
        int rows=i.size();
        int cols=i[0].size();
        vector<int>dx={-1,0,1,0};
        vector<int>dy={0,1,0,-1};
        queue<pair<int,int>>q;
        q.push({sr,sc});
        i[sr][sc]=c; 
         while(!q.empty()){
          pair<int,int>p=q.front();
          q.pop();
          int x=p.first;
          int y=p.second;
          for(int j=0;j<=3;j++){
            int nx=x+dx[j];
            int ny=y+dy[j];
              if(nx>=0&&ny>=0&&nx<rows&&ny<cols&&i[nx][ny]==oc){
                i[nx][ny]=c;
                q.push({nx,ny});
              }


          }




         } 


      return i;
    }
};