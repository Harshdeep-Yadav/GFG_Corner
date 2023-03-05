class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
	    int sum1=0,sum2=0;
	    for(int i=0;i<m;i++){
	        sum2+=B[i];
	    }
	    for(int i=0;i<n;i++){
	        sum1+=A[i];
	    }
	    if(sum1==sum2){
	        return 1;
	    }
	    
	    if((sum1+sum2)& 1) 
        return -1;
        
	    sort(A,A+n);
	    sort(B,B+m);
	    
	    int diff=(sum1-sum2)/2;
	    int i=0,j=0;
	    
	    while(i<n&&j<m){
	        if(diff==A[i]-B[j]){
	            return 1;
	        }
	        else if(diff>A[i]-B[j]){
	            i++;
	        }
	        else{
	            j++;
	        }
	    }
	    return -1;
	}
};
