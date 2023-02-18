class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int>ans;
        int r=a[n-1];
        ans.push_back(a[n-1]);
        for(int i=n-2;i>=0;i--){
            if(a[i]>=r){
                r=a[i];
                ans.push_back(a[i]);
            }
        }
         reverse(ans.begin(),ans.end());
         return ans ;
    }
};