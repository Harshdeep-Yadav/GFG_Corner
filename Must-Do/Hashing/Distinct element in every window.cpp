class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<k;i++){
            mp[A[i]]++;
        }
        int j=0;
        
        ans.push_back(mp.size());
        
        for(int i=k;i<n;i++){
            mp[A[i]]++;
            mp[A[j]]--;
            
            if(mp[A[j]]==0)
              mp.erase(A[j]);
              
            ans.push_back(mp.size());
            j++;
           
        }
        return ans;
    }
};