class Solution{
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int A[], int N)
    {
    //   Your code here
      int j=0;
      for(int i=0;i<N;i++)
      {
          if(A[i]==0)
          {
              swap(A[j],A[i]);
              j++;
          }
      }
    //   sort(A,A+N);
    }
};