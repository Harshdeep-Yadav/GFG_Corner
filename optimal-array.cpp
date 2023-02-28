class Solution
{
public:
    vector<int> optimalArray(int n,vector<int> &a){
        vector<int>res;
        vector<int>sum(n,0); // storing sum 
        res.push_back(0); // [0,]
        sum[0]=a[0];      // [1,]
        for(int i=1;i<n;i++){
            sum[i]=sum[i-1]+a[i]; // [1,7,16,28]
            int curr=0;
            if(i%2==0){
                int j=i/2;
                int sum1=sum[j-1];
                int sum2=sum[i]-sum[j];
                curr=abs(sum1-sum2);
            }
            else{
                int j=i/2;
                int sum1=sum[j];
                int sum2=sum[i]-sum[j];
                curr=abs(sum1-sum2);
            }
            res.push_back(curr);
        }
        return res;
    }
};