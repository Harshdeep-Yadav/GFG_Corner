class Solution
{
public:
    long long f(int i, int len, vector<int> &A, vector<long long> &dp)
    {
        if (i >= len)
            return 0;
        if (dp[i] != -1)
            return dp[i];
        int ans = 0;
        long long nottake = A[i] + f(i + 1, len, A, dp);
        long long take = 0;
        if (i + 1 < len)
        {
            take = A[i + 1] + f(i + 2, len, A, dp);
        }
        dp[i] = max(take, nottake);
        return dp[i];
    }
    long long findMaxSubsetSum(int n, vector<int> &A)
    {
        vector<long long> dp(n, -1);
        return f(0, n, A, dp);
    }
};