class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        //code here
        vector<int>ans(2,0);
        int i=0;
        int j=m-1;
        int diff=INT_MAX;
        while(i<n && j>=0){
            int sum=arr[i]+brr[j];
            if(diff>abs(sum-x)){
                diff=abs(sum-x);
                ans[0]=arr[i];
                ans[1]=brr[j];
            }
            if(sum>x){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};