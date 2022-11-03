class Solution{
    public:
    int removals(vector<int>& arr, int k){
        int n=arr.size();
        
        sort(arr.begin(),arr.end());
        int i=0;
        int j=0;
        int maxSize=0; // storing size of  window
        while(j<n)
        {
            if(arr[j]-arr[i]<=k)
            {
                j++;
            }
            else if(i<j)
            {
                i++;
            }
            maxSize=max(maxSize,j-i);
        }
        return n-maxSize;
    }
};