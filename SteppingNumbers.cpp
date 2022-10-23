class Solution{
public:
    int solve(int ind,int n,int m)
    {
        int count=0;
        if(ind>m) return 0;
        if(ind>=n && ind<=m)
        {
            count++;
        }
        int last = ind%10;
        if(last!=0)
        {
            count+=solve((ind*10)+(last-1),n,m);
        }
        if(last!=9)
        {
            count+=solve((ind*10)+(last+1),n,m);
        }
        return count;
    }
    int steppingNumbers(int n, int m)
    {
        int count=0;
        if(n==0) count++;
        for(int i=1;i<=9;i++)
        {
            count+=solve(i,n,m);
        }
        
        return count;
    }
};
