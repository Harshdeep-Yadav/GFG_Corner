class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    int cnt=0;
	    set<int>mp(arr,arr+n);
	    for(int i=0;i<n-1;i++){
	        for(int j=i+1;j<n;j++){
	            if(mp.find(arr[i]+arr[j])!=mp.end())
	            cnt++;
	        }
	    }
	    return cnt;
	}
};