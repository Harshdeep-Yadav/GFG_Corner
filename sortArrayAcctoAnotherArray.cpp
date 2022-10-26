
class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
    {
        unordered_map<int,int> mp;
        for(int i=0;i<N;i++)
        {
            mp[A1[i]]++;
        }
        vector<int> ans;
        for(int i=0;i<M;i++)
        {
            while(mp[A2[i]]!=0)
            {
                ans.push_back(A2[i]);
                mp[A2[i]]--;
            }
        }
        
        vector<int>rest_elm;
        for(auto it : mp)
        {
            int freq=it.second;
            while(freq!=0)
            {
                rest_elm.push_back(it.first);
                freq--;
            }
        }
       
       int n=rest_elm.size();
       sort(rest_elm.begin(),rest_elm.end());
       for(int i=0;i<n;i++ )
       {
           ans.push_back(rest_elm[i]);
       }
        return ans ;
        
    } 
};