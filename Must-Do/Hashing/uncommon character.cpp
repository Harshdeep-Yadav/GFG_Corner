class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            string res="";
            unordered_map<char,int>a;
            unordered_map<char,int>b;
            for(auto it : A) a[it]++;
            for(auto it : B) b[it]++;
            map<char,int>mp;
            
            for(int i=0;i<A.size();i++){
                if(b[A[i]]==0)
                mp[A[i]]++;
            }
            
             
            for(int i=0;i<B.size();i++){
                if(a[B[i]]==0)
                mp[B[i]]++;
            }
            
            for(auto it: mp){
                res+=it.first;
            }
            if(mp.empty())
              return "-1";
            return res;
        }
};