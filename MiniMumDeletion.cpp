class Solution{
//   public:
//   // ~~~~~~~~~~~~~~~~~~~~~~~~~~~MEMOIZAITON~~~~~~~~~~~~~~~~~~~~~~~
//   int  dp[1001][1001];
//   int solve(string s,int i, int j){
     
//       if(i>=j){
//           return 0;
//       }
//       if(dp[i][j]!=-1) return dp[i][j];
      
//       if(s[i]==s[j]){
//           return dp[i][j]= solve(s,i+1,j-1);
//       }
      
//       return dp[i][j]= 1+min(solve(s,i+1,j),solve(s,i,j-1));
//   }
//     int minimumNumberOfDeletions(string S) { 
//         int n =S.size();
//         memset(dp,-1,sizeof(dp));
//         return solve(S,0,n-1);
//     } 
    
    /*
    
    INTIUTION-> pure string me se sabse bna palindrome subsequence nikaal liya uske baad usko 
    given string ke size me se substract kar diya 
    
    exmp->  aebcbda -> longestPalSub(abcba) ka size isme 5 hai 
    aur nomal string ka 7 
    to 7-5 = 2(Output)
        
    
    
    
    
    
    
    */
  public:
  int  dp[1001][1001];
  int longestSuq(string &S,string &s,int i, int j){
     if(i==0|| j==0){
         return 0;
     }
     
     if(dp[i][j]!=-1) return dp[i][j];
     
     if(S[i-1]==s[j-1])
        return dp[i][j]=1+longestSuq(S,s,i-1,j-1);
     return dp[i][j]=max(longestSuq(S,s,i-1,j),longestSuq(S,s,i,j-1));
  }
    int minimumNumberOfDeletions(string S) { 
        int n =S.size();
        memset(dp,-1,sizeof(dp));
        string s=S;
        reverse(s.begin(),s.end());
        int sizeOfMaxiPaliSubseq=longestSuq(S,s,n,n);
        return  n-sizeOfMaxiPaliSubseq;
    }
};