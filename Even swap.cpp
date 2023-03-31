class Solution
{
    public:
        vector <int> lexicographicallyLargest(vector <int> &a,int n)
        {
            int i=0;
            while(i<n){
            int j=i+1;
            while(j<n&& (a[j]+a[j-1])%2==0 )
                j++;
            
            sort(a.begin()+i,a.begin()+j,greater<int>()); // sort array element only b/w i and j
            i=j;  
            }
        return a;
        }
};
