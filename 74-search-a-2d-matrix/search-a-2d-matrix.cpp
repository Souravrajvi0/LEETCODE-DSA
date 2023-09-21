class Solution {
public:
    int findrow(vector<vector<int>>& matrix, int target){
        int row=0;
        int fc=0;
        int lc=matrix[0].size()-1;
        while(row<matrix.size()){
            if((target>=matrix[row][fc])&&(target<=matrix[row][lc]))
            {
                return row;
            }
            row++;
        }
        return -1;



    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int row= findrow(matrix,target);
        if(row<0){
            return false;
        }else{
        int low=0;
        int high=matrix[0].size()-1;
        int mid;
        while(low<=high){
            mid=low+(high-low)/2;
         if(matrix[row][mid]==target){
             return true;
         }else if(matrix[row][mid]>target){
             high=mid-1;
         }else{
             low=mid+1;
         }

        }
        return false;













        }

        
    }
};