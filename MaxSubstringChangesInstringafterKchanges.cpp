class Solution {
	public:
		int characterReplacement(string s, int k){
		    // Code here44
		    
		    int res =0;
		    int i=0,j=0;
		    int n=s.size();
		    int maxfreq=0;
		    unordered_map<char,int>mp;
		    while(j<n)
		    {
		        mp[s[j]]++;
		        maxfreq=max(maxfreq,mp[s[j]]);
		        
		        int len =j-i+1;
		        if(len-maxfreq<=k)
		        {
		            j++;
		            res=max(res,len);
		        }
		        else
		        {
		            mp[s[i]]--;
		            i++;
		            j++;
		        }
		    }
		    return res;
		}
};