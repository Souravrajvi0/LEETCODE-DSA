class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        for(int i=2;i<cost.size();i++){
         
         int c1=cost[i]+cost[i-1];
         int c2= cost[i]+cost[i-2];
         int rc=min(c1,c2);
         cost[i]=rc;

        }
        return min(cost[cost.size()-1],cost[cost.size()-2]);
        
    }
};