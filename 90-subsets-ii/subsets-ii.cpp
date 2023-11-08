class Solution {
public:
void gen(int i,int n,vector<int>& nums,vector<vector<int>>&res, vector<int>&cur){
    if(i>=n){
        bool k=true;
       sort(cur.begin(),cur.end());
       for(int i=0;i<res.size();i++){
           if(res[i]==cur){
            k=false;
           }
       }
      
       if(k)res.push_back(cur);
        return ;
      }
      cur.push_back(nums[i]);
      gen(i+1,n,nums,res,cur);
      cur.pop_back();
      gen(i+1,n,nums,res,cur);
      }













    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        vector<vector<int>>res;
        vector<int>cur;
        sort(nums.begin(),nums.end());
        gen(0,n,nums,res,cur);
        return res;
        
    }
};