// class Solution{ 
//     public:
        // ```````````````````TLE 1038``````````````````
//     long long int sumXOR(int arr[], int n){
//     	long long int xorr=0;
//     	for(int i=0;i<n;i++){
//     	    for(int j=i+1;j<n;j++){
//     	        xorr+=arr[i]^arr[j];
//     	    }
//     	}
//     	return xorr;
//     }
// };
class Solution{
    public:
    long long int sumXOR(int arr[], int n){
    	long long int res=0;
    	for(int i=0;i<32;i++){
    	    long long int IndvSum=0;
    	    long long cnt0=0,cnt1=0;
    	    for(int j=0;j<n;j++){
    	        if(arr[j]%2==0)
    	            cnt0++;
    	       else
    	            cnt1++;
    	        arr[j]/=2;
    	    }
    	    IndvSum=cnt1*cnt0*(1<<i);
    	    res+=IndvSum;
    	}
    	return res;
    }
};