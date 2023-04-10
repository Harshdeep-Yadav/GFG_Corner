class Solution {
public:
    int solve(int a, int b, int c) {
        int sum=a+b+c;
        int mini=min(a,min(b,c));
        int maxi=max(a,max(b,c));
        int mid=sum-(mini+maxi);
        if(maxi>(mini+mid)*2)
         return -1;
         
        return sum;
    }
};