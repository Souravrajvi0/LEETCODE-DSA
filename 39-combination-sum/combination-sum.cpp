class Solution {
public:
    void cs(int i,int is,int target,vector<int>& candidates,vector<int>&cur,vector<vector<int>>&res){
        
     if(i==candidates.size()){
        if(is==target){
            res.push_back(cur);
        }
        return;
        }
        if (i >= candidates.size() || is > target) {
        return;
         }
    
        cur.push_back(candidates[i]);
        cs(i,is+candidates[i],target,candidates,cur,res);
       
        cur.pop_back();
        cs(i+1,is,target,candidates,cur,res);


}
    
    
     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>cur;
        
        cs(0,0,target,candidates,cur,res);
        return res;




        
    }
};