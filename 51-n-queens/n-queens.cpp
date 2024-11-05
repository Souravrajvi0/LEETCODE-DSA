class Solution {
public:
   vector<vector<char>>grid;

   bool canPlaceQueen(int row, int col,int n){
    for(int r=row-1;r>=0;r--){
        if(grid[r][col]=='Q'){
         return false;
        }
    }
   
    for(int r=row-1,c=col+1;r>=0&&c<n;r--,c++){
       if(grid[r][c]=='Q'){
        return false;
        }
    }

    for(int r=row-1,c=col-1;r>=0&&c>=0;r--,c--){
      if(grid[r][c]=='Q'){
        return false;
         }
    }
   return true;
   }

   void f(vector<vector<string>> &res,int row,int n){
     if(row==n){
        vector<string>l;
        for(int i=0;i<n;i++){
            string s="";
            for(int j=0;j<n;j++){
                s+=grid[i][j];
            }
            l.push_back(s);
        }
        res.push_back(l);
        
     }

       for(int col=0;col<n;col++){
          if(canPlaceQueen(row,col,n)){
               grid[row][col]='Q';
               f(res,row+1,n);  
               grid[row][col]='.';
           }
        }
    }


    vector<vector<string>> solveNQueens(int n) {
       grid.resize(n, vector<char>(n, '.'));
       vector<vector<string>> res;
       f(res,0,n);
       return res;
     }
};