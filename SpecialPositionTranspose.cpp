class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n =mat.size();
        int m =mat[0].size();
        int cnt=0; // counting the values
        
//      store the 1 in each and every column and row
        vector<int>rowCnt(n,0); 
        vector<int>colCnt(m,0);

         // Counting '1's in each row and column
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                    rowCnt[i]++;
                    colCnt[j]++;
                }
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                if(rowCnt[i]==1 && colCnt[j]==1){
                    cnt++;
                }
                }
            }
        }
        return cnt;
    }
};