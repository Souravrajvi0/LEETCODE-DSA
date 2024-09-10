class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
       vector<int>pf(n);
        pf[0]=nums[0];
        for(int i=1;i<n;i++){
            pf[i]=pf[i-1]*nums[i];
        }
    vector<int>sf(n);
       sf[n-1]=nums[n-1];
       for(int i=n-2;i>=0;i--){
        sf[i]=nums[i]*sf[i+1];
       }
       vector<int>res;
       res.push_back(sf[1]);
       for(int i=1;i<n-1;i++){
        res.push_back(pf[i-1]*sf[i+1]);
       }
    for (int val : pf) {
        cout << val << " ";
    }
    cout << endl;
     for (int val : sf) {
        cout << val << " ";
    }
    cout << endl;
     for (int val : res) {
        cout << val << " ";
    }
    cout << endl;
       res.push_back(pf[n-2]);
       return res;


       

    }
};