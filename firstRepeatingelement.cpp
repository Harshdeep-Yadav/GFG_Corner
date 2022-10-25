class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
       unordered_map<int,int> mp;
       for(int i=0;i<n;i++)
       {
           mp[arr[i]]++;
       }
       for(int i=0;i<n;i++)
       {
           int key=arr[i];
           auto tmp=mp.find(key);
           if(tmp->second>1)
           {
               return i+1;
           }
       }
       return -1;
    }
};