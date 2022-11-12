class Solution{
public:
    int totalWays(int n, vector<int>capacity) {
       
         sort(capacity.begin(),capacity.end());

        long long int res = 1 ;

        for(int i = 0 ; i < n ; i++){

            long long int temp = capacity[i];

            res = ((res%1000000007)*((temp-i)%1000000007))%1000000007;

        }

        return res ;

 // code here
    }
};