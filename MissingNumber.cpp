
int missingNumber(int A[], int N)
{

    // vector<int> arr(N+1,-1);
    // int res=0;
    // for(int i=1;i,N;i++)
    // {
    //     arr[A[i]]=A[i];
    // }
    // for(int i=1;i<N;i++)
    // {
    //     if(arr[i]==-1)
    //     res=i;
    //     break;
    // }
    // return res;
    
    int totsum=(N*(N+1))/2;
    
    for(int i=0;i<N-1;i++)
    {
        totsum-=A[i];
        
    }
    return totsum;
}