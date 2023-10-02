class Solution{
  public:	
    int mod=1e9+7;
    
	int distinctSubsequences(string s)
	{
	    int n =s.size();
	    unordered_map<char,int>mp;
	    vector<int>dp(n+1);  // taking this of size n+1 where n for string lenght 
	                          // and 1 for storing ibase case at 0th index
	    
	    dp[0]=1; // base case
	    
	    for(int i=1;i<=n;i++){
	        char ch=s[i-1];
	        dp[i]=2*dp[i-1]%mod; // 2 bcz take or not take case of character from string
	        if(mp.find(ch)!=mp.end()){
	            int ind=mp[ch];
	            dp[i]=(dp[i]-dp[ind-1]+mod)%mod;
	        }
	        mp[ch]=i;
	    }
	    
	    return dp[n];
	}
};