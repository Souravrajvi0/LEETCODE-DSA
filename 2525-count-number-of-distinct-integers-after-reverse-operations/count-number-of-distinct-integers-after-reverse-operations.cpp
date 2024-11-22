class Solution {
public:
    int rev(int num){
     int reversed = 0;
        while (num) {
            int last = num % 10;
            reversed = reversed * 10 + last;
            num /= 10;
        }
        return reversed;
    }

    
    
    int countDistinctIntegers(vector<int>& nums) {
          unordered_set<int>s;
          for(int i=0;i<nums.size();i++){
            int revn=rev(nums[i]);
            s.insert(revn);
            s.insert(nums[i]);
        }
        return s.size();
    }
};