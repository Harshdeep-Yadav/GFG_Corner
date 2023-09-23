class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        
        long long pre_sum[n];
        pre_sum[0]=a[0];
        for(int i=1;i<n;i++)
        {
            pre_sum[i]=pre_sum[i-1]+a[i];
        }
        long long pre_sum2[n];
        pre_sum2[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--)
        {
            pre_sum2[i]=pre_sum2[i+1]+a[i];
        }
        for(int i=0;i<n;i++)
        {
        if(pre_sum[i]==pre_sum2[i])
        {
            return i+1;
        }
        
        }
        return -1;
    }

};


class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    // int equilibriumPoint(long long a[], int n) {
    
    //     long long preSum[n];
        
    //     preSum[0]=a[0];
        
    //     for(int i=1;i<n;i++){
    //         preSum[i]=preSum[i-1]+a[i];
    //     }
        
    //     long long sufSum[n];
    //     sufSum[n-1]=a[n-1];
        
    //     for(int i=n-2;i>=0;i--){
    //         sufSum[i]=sufSum[i+1]+a[i];
    //     }
        
    //     for(int i=0;i<n;i++){
    //         if(preSum[i]==sufSum[i]){
    //             return i+1;
    //         }
    //     }
    //     return -1;
    // }
    
    int equilibriumPoint(long long a[], int n) {
        long long right = 0, left = 0;
        for(int i = 0; i < n; i++) right += a[i];
        for(int i = 0; i < n; i++)
        {
            right -= a[i];
            if(left == right) return i + 1;
            left += a[i];
        }
        return -1;
    }

};