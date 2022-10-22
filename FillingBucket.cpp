class Solution {
  public:
  int mod=1e8;
  int solve(int n,vector<int> &dp)
  {
      if(n<0)
        return 0;
       if(n==0)
        return 1;
        int ans =0;
    if(dp[n]!=-1) return dp[n];
       ans+= solve(n-1,dp)%mod;
       ans+=+solve(n-2,dp)%mod;
       return dp[n]=ans%mod;
  }
    int fillingBucket(int N) {
        vector<int> dp(N+1,-1);
            return solve(N,dp);
    }
};