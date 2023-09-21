https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1

class Solution
{
    public:
    //Function to find the maximum money the thief can get.
     int robber(int i,int arr[],vector<int> &dp){
        if(i<0) return 0;
        
        if(dp[i] != -1) return dp[i];
        
        int left = arr[i] + robber(i-2,arr,dp);
        
        return dp[i] = max(left,robber(i-1,arr,dp));

    }
    
    int FindMaxSum(int arr[], int n)
    {
        vector<int> dp(n,-1);
        return robber(n-1,arr,dp);
    }
};