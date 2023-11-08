class Solution {
public:
   
   void gen(int i,vector<int>& nums,vector<vector<int>>&res, vector<int>&cur){
    if(i>=nums.size()){
      res.push_back(cur);
      return ;
      }
      cur.push_back(nums[i]);
      gen(i+1,nums,res,cur);
      cur.pop_back();
      gen(i+1,nums,res,cur);
      }
   
   
   
   
   
   
      vector<vector<int>> subsets(vector<int>& nums) {
     
        
        vector<vector<int>>res;
        vector<int>cur;
        gen(0,nums,res,cur);
        return res;
    }
};