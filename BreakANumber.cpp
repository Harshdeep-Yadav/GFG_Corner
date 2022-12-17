class Solution{   
public:
    int waysToBreakNumber(int N){
        // code here 
        long long res=N+1;
        return (((res*(res+1))/2)%1000000007);
    }
};