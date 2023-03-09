class Solution {
  public:
    long long maxTripletProduct(long long arr[], int n)
    {
    	sort(arr,arr+n);
    	long long ans=max(arr[0]*arr[1]*arr[n-1],arr[n-3]*arr[n-2]*arr[n-1]);
    	return ans;
    }
};