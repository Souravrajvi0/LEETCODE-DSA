class Solution {
public:
   void bfs(vector<vector<int>>& ic,vector<int>&vis,int startv){
    vis[startv]=1;
    queue<int>q;
    q.push(startv);

    while(!q.empty()){
      int vertex=q.front();
      q.pop();

      for(int j=0;j<ic.size();j++){
      if(vertex==j)continue;
      if(ic[vertex][j]==1&&!vis[j]){
        vis[j]=1;
        q.push(j);
      }
    }
}
  }

        int findCircleNum(vector<vector<int>>& ic) {
        int n=ic.size();
        vector<int>vis(n,0);
        int count=0;

        for(int i=0;i<n;i++){
          if(!vis[i]){
            count++;
            bfs(ic,vis,i);
          }
         } 
    return count;
}
};