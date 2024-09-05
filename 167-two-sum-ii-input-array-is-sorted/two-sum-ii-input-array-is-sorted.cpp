class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>res;
        int left=0;
        int right=numbers.size()-1;
        while(left<right){
        int value=numbers[left]+numbers[right];
        if(value<target){
            left++;
        }else if(value>target){
            right--;
        }else if(value==target){
           break;
        }
     }
     res.push_back(left+1);
     res.push_back(right+1);
     return res;
    }
};