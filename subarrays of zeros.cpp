long long int no_of_subarrays(int n, vector<int> &arr) {
    long cnt=0;
    long zero=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zero++;
            // cout<<zero;
        }else{ //if arr[i]=1
            cnt+=(zero*(zero+1))/2;
            // cout<<cnt;
            zero=0;
        }
    }
    if(zero!=0)
        cnt+=(zero*(zero+1))/2;
  
    return cnt;
}