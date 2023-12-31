class Solution {
public:
   
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0;
        int high=matrix.size()-1;
        int mid;
        int row=0;
        while(low<=high){
        mid=low+(high-low)/2;

        if(matrix[mid][0]>target){
            high=mid-1;
        }else if(matrix[mid][0]<target){
            row=mid;
            low=mid+1;
        }else{
            return true;
        }
         }
        low=0;
        high=matrix[0].size()-1;
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
};