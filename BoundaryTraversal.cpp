class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        vector<int>v;
        for(int i=0;i<m;i++){
            v.push_back(matrix[0][i]);
        }
        for(int i=1;i<n-1;i++){
            v.push_back(matrix[i][m-1]);
        }
         if(n==1) return v;
        for(int i=m-1;i>=0;i--){
            v.push_back(matrix[n-1][i]);
        }
        if(m==1) return v;
        for(int i=n-2;i>=1;i--){
            v.push_back(matrix[i][0]);
        }
        return v;
    }
};