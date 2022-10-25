class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    {
     int ans=0;
       unordered_map<int,int>mp;
       for(int i=0;i<n;i++)
       {
          
           mp[arr[i]]++;
       }
       for(int i=0;i<n;i++)
       {
           int key=arr[i];
           auto tmp=mp.find(key);
           if(tmp->second==1)
           {
               return key;
           }
       }
       return 0;
    } 
  
};