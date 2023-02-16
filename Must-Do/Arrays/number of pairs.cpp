 double transform(int x){
        return log2((double)x)/(double)x;
    }
    bool comp(int x,int y){
        return (transform(x)<transform(y));
    }
    
class Solution{
    public:
    long long countPairs(int X[], int Y[], int M, int N)
    {
        long long  cnt=0;
        sort(X,X+M,comp);
        sort(Y,Y+N,comp);
        int j=0;
        for(int i=0;i<M;i++){
            while(j<N) && transform(X[i])>transform(Y[j])){
                j++;  
            }
             cnt+=j;
            }
        return cnt;
    }
};



