class Solution{

	public:
	int mod=1e9+7;
	
	int solve(int i ,int sum, int arr[],vector<vector<int>>& dp,int n){
	    // base case
	    if(i==n&&sum==0){
	        return 1;
	    }
	    if(i>=n || sum<0){
	        return 0;
	    }
	    
	    if(dp[i][sum]!=-1) return dp[i][sum];
	    
	   int pick=solve(i+1,sum-arr[i],arr,dp,n);
	   
	   int notpick=solve(i+1,sum,arr,dp,n);
	   
	   
	   return dp[i][sum]=(pick%mod+notpick%mod)%mod;
	    
	}
	int perfectSum(int arr[], int n, int sum)
	{
        int totSum=0;
        for(int i=0;i<n;i++){
            totSum+=arr[i];
        }
        
        // edge case
        
        if(totSum<sum) return 0;
        
        // dp vector
        vector<vector<int>>dp(n+1,vector<int>(totSum+1,-1));
        // funtion
        int res=solve(0,sum,arr,dp,n);
        // ans
        return res;
	}
};