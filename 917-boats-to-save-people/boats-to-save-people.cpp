class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        ios_base::sync_with_stdio(false); 
        cin.tie(nullptr); 
        cout.tie(nullptr);
        int ans = 0;
        sort(people.begin() , people.end());
        int left = 0 , right = people.size() - 1;
        while(left <= right){
            if(people[left] + people[right] <= limit){
                ans ++;
                left++;
                right--;
            } else {
                ans ++;
                right--;
            }
        }
        return ans;
    }
};