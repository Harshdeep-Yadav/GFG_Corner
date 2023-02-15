  int i=n-1,j=0;
            while(i>=0&&j<m)
            {
                if(arr1[i]>arr2[j])
                {
                    long temp=arr1[i];
                    arr1[i]=arr2[j];
                    arr2[j]=temp;
                }
                
                    i--;
                    j++;
            
            }
            sort(arr1,arr1+n);
            sort(arr2,arr2+m);
        }