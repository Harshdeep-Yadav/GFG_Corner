class Solution {
  public:
    int minimumInteger(int n, vector<int> &a) {
       long long s=0;
       for(int i=0;i<n;i++) 
            s+=a[i];
        
       int mini=1e9;
       for(int i=0;i<n;i++){
           if(n*1LL*a[i]>=s){
               mini=min(mini,a[i]);
           }
       }
       return mini;
    }
};