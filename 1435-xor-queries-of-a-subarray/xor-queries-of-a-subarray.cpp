class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& q) {
    ios::sync_with_stdio(false);
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
        vector<int>ans(q.size());
        for(int i=1;i<arr.size();i++){
         arr[i]=arr[i]^arr[i-1];
        }
        for(int i=0;i<q.size();i++){
            int right=q[i][1];
            int left=q[i][0];
            if(left==0){
                ans[i]=arr[right];
            }else{
                ans[i]=arr[right]^arr[left-1];
            }
        }
        return ans;
    }
};