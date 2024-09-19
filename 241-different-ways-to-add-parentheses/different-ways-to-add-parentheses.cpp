class Solution {
    bool isOperator(char ch) {
        return (ch == '+' || ch == '-' || ch == '*');
    }

public:
    vector<int> diffWaysToCompute(string expression) {
        int n = expression.size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(n));

        // Function to check if given substring of expression
        // is a valid expression
        auto isValidExpression = [&](int i, int j) -> bool {
            return (i == 0 || isOperator(expression[i - 1])) && (j == n - 1 || isOperator(expression[j + 1]));
        };

        // get answer for all single digit numbers
        for(int i = 0; i < n; i++) {
            if(isValidExpression(i, i)) {
                dp[i][i] = { stoi(expression.substr(i, 1)) };
            }
        }

        // get answer for all 2 digit numbers
        for(int i = 0, j = 1; j < n; i++, j++) {
            if(isValidExpression(i, j)) {
                dp[i][j] = { stoi(expression.substr(i, 2)) };
            }
        }

        // get answer for all valid expression substrings in bottom up manner
        for(int len = 3; len <= n; len++) {
            for(int i = 0, j = i + len - 1; j < n; i++, j++) {
                if(!isValidExpression(i, j))
                    continue;

                // Try to evaluate every operator
                for(int ind = i; ind <= j; ind++) {
                    if(isOperator(expression[ind])) {
                        char op = expression[ind];

                        // if char at ind is operator 
                        // get all results for its left and right substring
                        vector<int> left = dp[i][ind - 1];
                        vector<int> right = dp[ind + 1][j];

                        // try all options for left & right operand
                        // and push all results to the answer
                        for(int l : left) {
                            for(int r : right) {
                                if(op == '+') {
                                    dp[i][j].push_back(l + r);
                                }
                                else if(op == '-') {
                                    dp[i][j].push_back(l - r);
                                }
                                else if(op == '*') {
                                    dp[i][j].push_back(l * r);
                                }
                            }
                        }
                    }
                }         
            }
        }

        return dp[0][n - 1];
    }
};