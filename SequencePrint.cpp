
class Solution {
	public:
		int NthTerm(int n){
		   int mod=1e9+7;
		   long long int ini=2;
		   if(n==1) return ini;
		   for(int i=2;i<=n;i++)
		   {
		      ini=ini*i+1;  
		      ini=ini%mod;
		   }
		   return ini;
		}
};