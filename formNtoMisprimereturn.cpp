class Solution {
  public:
  bool isprime(int n)
  {
      if(n==1)
      return false;
      for(int i=2;i*i<=n;i++)
      {
          if(n%i==0)
           return false;
      }
      return true;
  }
    vector<int> primeRange(int M, int N) 
    {
        vector<int> ans;
        for(int i =M;i<=N;i++)
        {
            if(isprime(i)==true)
            ans.emplace_back(i);
        }
        return ans;
    }
};