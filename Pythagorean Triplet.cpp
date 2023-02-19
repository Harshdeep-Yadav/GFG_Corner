class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int a[], int n) {
	   // if(n<3) return false;
	   // for(int i=0;i<n;i++){
	   //     for(int j=0;j<n;j++){
	   //         for(int k=0;k<n;k++){
	   //             if(a[i]*a[i]+a[j]*a[j]==a[k]*a[k])
	   //                 return true;
	   //         }
	   //     }
	   // }
	   // return false;
	   
	   // second solution
	   unordered_map<int,int>mp;
	   for(int i=0;i<n;i++){
	       a[i]=pow(a[i],2);
	       mp[a[i]]=1;
	   }
	   for(int i=0;i<n;i++){
	       for(int j=i+1;j<n;j++){
	           if(mp[a[i]+a[j]]==1) return true;
	       }
	   }
	   return false;
	}
};