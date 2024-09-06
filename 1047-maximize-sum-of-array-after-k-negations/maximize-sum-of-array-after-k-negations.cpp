class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>minhp(nums.begin(),nums.end());
       
        while(k>0){
            int small=minhp.top();
            minhp.pop();
            small*=-1;
            minhp.push(small);
            k--;
        }
        int sum=0;
        while(!minhp.empty()){
            sum+=minhp.top();
            minhp.pop();
        }
        return sum;

    }
};