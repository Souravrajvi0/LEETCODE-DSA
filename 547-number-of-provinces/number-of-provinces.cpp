class Solution {
public:
    void bfs(vector<vector<int>>& isConnected,vector<int>&vis,int start){
    queue<int>q;
    vis[start]=1;
    q.push(start);

    while(!q.empty()){
    int vertex=q.front();
    q.pop();

    for(int i=0;i<isConnected.size();i++){
     if(isConnected[vertex][i]==1&&!vis[i]){
        vis[i]=1;
        q.push(i);
     }
    }
    }
  }
    int findCircleNum(vector<vector<int>>& isConnected) {
    int V=isConnected.size();
    vector<int>vis(V,0);
    int count=0;

    for(int i=0;i<V;i++){
        if(!vis[i]){
           count++;
           bfs(isConnected,vis,i);
        }
    }
     return count;
 }
};