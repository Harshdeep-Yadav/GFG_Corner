class Solution {
  public:
string isPossible(int n, int m, int base){
      string ans="";
      while(n>0){
          ans+=n%base;
          n/=base;
          m--;
      }
      if(m==0){
          return ans;
      }
      else{
          return "-1";
      }
  }
    string baseEquiv(int n, int m){
        // code here
        for(int i=2;i<=32;i++){
            if(isPossible(n,m,i)!="-1"){
                return "Yes";
            }
        }
        return "No";
    }
};