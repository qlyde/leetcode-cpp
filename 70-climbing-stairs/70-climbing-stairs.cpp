class Solution {
public:
    int climbStairs(int n) {
        // (i - 1)th step + 1 step
        // (i - 2)th step + 2 steps
        // climbStairs(i) = climbStairs(i - 1) + climbStairs(n - 2)
        vector<int> dp{1, 2};
        for (int i = 2; i < n; ++i) dp.push_back(dp[i - 1] + dp[i - 2]);
        return dp[n - 1];
    }
};