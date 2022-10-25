class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        unordered_map<string,int>mp;
        for(int i =0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        string ans="";
        int max=INT_MIN;
        for(auto it : mp)
        {
            string key=it.first;
            int val=it.second;
            if(val>max)
            {
                max=val;
                ans=key;
            }
            else if(val==max)
            {
                if(key<ans)
                {
                    ans=key;
                }
            }
        }
        vector<string> res;
        res.push_back(ans);
        string tmp=to_string(max);
        res.push_back(tmp);
        return res;
    }
};