class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
    int low=0;
    int high=letters.size()-1;
    char ch='t';
    int mid;
    while(low<=high){
    mid=low+(high-low)/2;
    if(letters[mid]<=target){
        low=mid+1;
    }else if(letters[mid]>target){
         ch=letters[mid];
         high=mid-1;
    }else{

    }
        
    }
    if(low>high&& high==letters.size()-1){
        return letters[0];
    }
    return ch;

        
    }
};