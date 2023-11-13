class Solution
{
    public:
    
    int lcs(string x,string y ,int i,int j,vector<vector<int>>&dp){
        
        if(i==x.size() || j==y.size()){
            return 0;
        }
        
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        int res=0;
        
        if(x[i]==y[j]){
            res=1+lcs(x,y,i+1,j+1,dp);
        }
        else{
            res=max(lcs(x,y,i+1,j,dp),lcs(x,y,i,j+1,dp));
        }
        
        return dp[i][j]=res;
    }
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        int ans=lcs(X,Y,0,0,dp);
        return m+n-ans;
    }
};