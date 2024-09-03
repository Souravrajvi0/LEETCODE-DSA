class Solution {
public:
    int maxSatisfied(vector<int>& c, vector<int>& g, int m) {
       int n = c.size();
        int prwdc = 0;
        
        // Calculate initial window satisfaction
        for (int i = 0; i < m; ++i) {
            if (g[i] == 1) {
                prwdc += c[i];
            }
        }
        
        int maxSatisfaction = prwdc;
        int i = 0; // Start index of the window
        int j = m; // End index of the window
        
        // Slide the window across the array
        while (j < n) {
            int currentSatisfaction = prwdc;
            if (g[j] == 1) {
                currentSatisfaction += c[j];
            }
            if (g[i] == 1) {
                currentSatisfaction -= c[i];
            }
            
            // Update max satisfaction and window indices
            if (currentSatisfaction > maxSatisfaction) {
                maxSatisfaction = currentSatisfaction;
            }
            
            prwdc = currentSatisfaction;
            ++i;
            ++j;
        }
        
        // Calculate satisfaction for all customers who are not greedy
        int sumNonGreedy = 0;
        for (int i = 0; i < n; ++i) {
            if (g[i] == 0) {
                sumNonGreedy += c[i];
            }
        }
        
        return maxSatisfaction + sumNonGreedy;

    }
};