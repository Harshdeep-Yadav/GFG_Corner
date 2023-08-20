class Solution{
public:	
	int firstOcurrence(int arr[],int n ,int x){
	    int l=0;
	    int h=n-1;
	    int mid,res=-1;
	    while(l<=h){
	        mid=l+(h-l)/2;
	        if(arr[mid]==x){
	            res=mid;
	            h=mid-1;
	        }
	        else if(arr[mid]<x){
	            l=mid+1;
	        }
	        else{
	            h=mid-1;
	        }
	    }
	    return res;
	}
	int lastOcurrence(int arr[],int n ,int x){
	    int l=0;
	    int h=n-1;
	    int mid,res=-1;
	    while(l<=h){
	        mid=l+(h-l)/2;
	        if(arr[mid]==x){
	            res=mid;
	            l=mid+1;
	        }
	        else if(arr[mid]<x){
	            l=mid+1;
	        }
	        else{
	            h=mid-1;
	        }
	    }
	    return res;
	}
	int count(int arr[], int n, int x) {
	   // int cnt =0; // o(N)
	   // for(int i=0;i<n;i++){
	   //     if(arr[i]==x)
	   //         cnt++;
	   // }
	   // return cnt;
	   
	   
	   // O(logn)
	   int f=firstOcurrence(arr,n,x);
	   if(f==-1)
	    return 0;
	   int l=lastOcurrence(arr,n,x);
	   return  (l-f)+1;
	}
};