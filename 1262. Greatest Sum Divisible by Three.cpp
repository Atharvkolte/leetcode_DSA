class Solution {
public:
    int solve(int i, int sum, vector<int>& nums, vector<vector<int>>& dp) {

        int n = nums.size();

        if (i == n) {
            if (sum == 0) {
                return 0;
            }
            return -1e9;
        }

        if (dp[i][sum] != -1) {
            return dp[i][sum];
        }
        int pick = nums[i] + solve(i + 1, (sum + nums[i]) % 3, nums,dp);
        int skip = solve(i + 1, sum, nums,dp);

        return dp[i][sum]=max(skip, pick);
    }
    int maxSumDivThree(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(3, -1));
        return solve(0, 0, nums,dp);
    }
};
