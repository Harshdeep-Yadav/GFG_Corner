class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        int mp[256]={0}; // storing the frequency of p string chracter
        int cnt =0; // keep cnt of distinct  character    
        for(int i =0;i<p.size();i++){
            if(mp[p[i]]==0)
             cnt++;
            mp[p[i]]++;
        }
        
        int res=INT_MAX; // for minimum
        int start=0;
        int i=0,j=0; // using sliding window,but running by j
        
        while(j<s.size())
        {
            mp[s[j]]--; // jab koi bhi same character mil jaye 
            
            if(mp[s[j]]==0) cnt--; // pura charcter jb match kr jaye
            
            if(cnt==0) // jab puri string hi mil jaye s me
            {
                while(cnt==0){
                    if(j-i+1<res){
                        res=j-i+1;
                        start=i;
                    }
                    mp[s[i]]++;
                    if(mp[s[i]]==1) cnt++;
                    i++;
                }
            }
            j++;
        }
        if(res!=INT_MAX)
                return s.substr(start,res);
        else
            return "-1";
    }
};