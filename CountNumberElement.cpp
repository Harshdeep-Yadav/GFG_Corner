
class Solution
{
  public:
        int getCount (string S, int N)
        {
            int count=0;
            int  n=S.size();
           
           unordered_map<char ,int>mp;
            mp[S[0]]=1;
           for(int i=1;i<n;i++)
           {
                if(S[i]==S[i-1])
                {
                    continue;
                }
               mp[S[i]]++;
           }
           for(auto it : mp)
           {
               if(it.second==N)
               {
                   count++;
               }
           }
           return count;
        }
};