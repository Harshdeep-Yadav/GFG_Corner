	
	/* Returns count of pairs with difference k in arr[] of size n. */
	int countPairsWithDiffK(int arr[], int n, int k) {
	    int count=0;
	    unordered_map<int,int>mp;
	    for(int i=0;i<n;i++)
	    {
	        mp[arr[i]]++;
	    }
	    for(int i=0;i<n;i++)
	    {
	        int tmp=arr[i];
	        
	        if(k==0)
	        {
	            if(mp[tmp]>1)
	            {
	                mp[tmp]--;
	                count+=mp[tmp];
	            }
	        }
	        else
	        {
                if(mp.find(tmp+k)!=mp.end())
                {
                    count+=mp[tmp+k];
                }
	        }
	    }
	   //int count=0;
	   ////for(int i=0;i<n;i++)
	   ////{
	   ////    for(int j=i+1;j<n;j++)
	   ////    {
	   ////        if(abs(arr[i]-arr[j])==k){
	   ////            count++;
	   ////        }
	   ////    }
	   
	   ////}
	   //int l=0;
	   //int r=n-1;
	   //   while(l<=n && r>=0)  
	   //{
	   //    int sub=abs(arr[l]-arr[r]);
	   //    if(sub==k)
	   //    {
	   //        count++;
	   //        r--;
	   //    }
	   //    l++;
	   //}
	   return count;
	}
};