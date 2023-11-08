class Solution {
public:
   void pm(vector<int>& nums,vector<int>&frq,vector<vector<int>>&res,vector<int>&cur){

    if(cur.size()==nums.size()){
        res.push_back(cur);
        return;
    }


     for(int j=0;j<nums.size();j++){
         if(!frq[j]){
      frq[j]=1;
      cur.push_back(nums[j]);
      pm(nums,frq,res,cur);
      cur.pop_back();
      frq[j]=0;
         }

     }








   }
  
  
     vector<vector<int>> permute(vector<int>& nums) {
     vector<vector<int>>res;
     vector<int>frq(nums.size(),0);
     vector<int>cur;
     pm(nums,frq,res,cur);
     return res;


        
    }
};
