class Solution {
  public:
    int equalSum(int N, vector<int> &A) {
        int sum=accumulate(A.begin(),A.end(),0);
        int sumr=0;
        for(int i=0;i<N;i++){
            if(sumr==(sum-A[i]-sumr)){
                return i+1;
            }
            sumr+=A[i];
        }
        return -1;
    }
};