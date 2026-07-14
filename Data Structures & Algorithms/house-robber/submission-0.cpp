class Solution {
   public:
    int rob(vector<int>& nums) {
        // tabulation method
        int n = nums.size();
        vector<int> dp(n + 2, INT_MIN);
        dp[n] = 0;
        dp[n + 1] = 0;
        for (int i = n - 1; i >= 0; i--) {
            dp[i] = max({dp[i], nums[i] + dp[i + 2], dp[i + 1]});
        }
        return dp[0];
    }
};
