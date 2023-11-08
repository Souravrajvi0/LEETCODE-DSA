class Solution {
public:
   
   void gen(int i,int n,vector<int>& nums,vector<vector<int>>&res, vector<int>&cur){
    if(i>=n){
      res.push_back(cur);
      return ;
      }
      cur.push_back(nums[i]);
      gen(i+1,n,nums,res,cur);
      cur.pop_back();
      gen(i+1,n,nums,res,cur);
      }
   
   
   
   
   
   
   
   
   
   
   
    vector<vector<int>> subsets(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        vector<vector<int>>res;
        vector<int>cur;
        gen(0,n,nums,res,cur);
        sort(res.begin(),res.end());
        return res;
    }
};