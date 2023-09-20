class Solution {
public:
    int mySqrt(int x) {
          if (x <= 1) {
            return x;
        }
        int low = 1;
        int high = x;
        int ans = 0;

        while (low <= high) {  // Changed the loop condition to allow for finding the square root.
            int mid = low + (high - low) / 2;
            if (mid == x / mid) {  // Use division to avoid potential overflow issues.
                return mid;
            } else if (mid < x / mid) {
                low = mid + 1;
                ans = mid;  // Update ans when mid is smaller than the square root.
            } else {
                high = mid - 1;
            }
        }
        return ans;
        
    }
};