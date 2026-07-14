class Solution {
   public:
    int coinChange(vector<int>& coins, int amount) {
        // Tabulation Method
        int n = coins.size();
        vector<int> dp(amount+1, INT_MAX);
        dp[0] = 0;
        for (int i = 0; i <= amount; i++) {
            for (int j = 0; j < n; j++) {
                if (i - coins[j] >= 0) {
                    // ha coins se negtive nhi  rh
                    // now we hve to check whether it possible to mke form this coin
                    // if dp[i-j] is infinity then it not possible to mke this so skip this
                    if (dp[i - coins[j]] != INT_MAX) {
                        dp[i] = min(dp[i], 1 + dp[i - coins[j]]);
                    }
                }
            }
        }
        if(dp[amount]!=INT_MAX) return dp[amount];
        return -1;
    }
};
