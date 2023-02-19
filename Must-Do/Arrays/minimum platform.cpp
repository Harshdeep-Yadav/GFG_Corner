class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int cnt=0;
    	int i=0,j=0;
    	int ans=0;
        while(i<n){
            if(arr[i]<=dep[j]){
                cnt++;
                ans=max(ans,cnt);
                i++;
            }
            else if(arr[i]>dep[j]){
                cnt--;
                j++;
            }
        }
        return ans;
    }
};