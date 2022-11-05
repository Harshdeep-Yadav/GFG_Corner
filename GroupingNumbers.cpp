class Solution {
  public:
    int maxGroupSize(int arr[], int N, int K) {
        vector<int> num(K,0);
        for(int i=0;i<N;i++)
        {
            num[arr[i]%K]++;
        }
        int i=1,j=K-1,ans=0;
        while(i<j)
        {
            ans+=max(num[i],num[j]);
            i++;
            j--;
        }
        if(i==j && num[i]>0)
        {
            ans+=1;
        }
        if(num[0]>0)
        {
            ans+=1;
        }
        return ans;
    }
};