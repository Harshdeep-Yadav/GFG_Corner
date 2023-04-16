class Solution {
  public:
    long long solve(int n, vector<int> &A, vector<int> &B) {
        long long sum1=0,sum2=0;
        vector<int> EvenOdda[2],EvenOddb[2];
        for(int i=0;i<n;++i){
            sum1+=A[i];
            sum2+=B[i];
            
            if(abs(A[i])%2==0){
                EvenOdda[0].push_back(A[i]);
            }
            else{
                EvenOdda[1].push_back(A[i]);
            }
            
            if(abs(B[i])%2==0){
                EvenOddb[0].push_back(B[i]);
            }
            else{
                EvenOddb[1].push_back(B[i]);
            }
        }
        
        if(sum1!=sum2 || EvenOdda[0].size()!=EvenOddb[0].size()){
            return -1;
        }
        
        long long cnt=0;
        
        for(int i=0;i<2;i++){
            sort(EvenOdda[i].begin(),EvenOdda[i].end());
            sort(EvenOddb[i].begin(),EvenOddb[i].end());
            
            for(int j=0;j<EvenOdda[i].size();++j){
                cnt+=abs(EvenOdda[i][j]-EvenOddb[i][j])/2;
            }
        }
        return cnt/2;
    }
};