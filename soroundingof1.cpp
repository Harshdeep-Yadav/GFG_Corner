class Solution {
public:
    int Count(vector<vector<int> >& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int ans=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int count=0;
                if(mat[i][j]==1){
                    // top
                    if(i-1>=0 && mat[i-1][j]==0)
                    {
                        count++;
                    }
                    // down
                    if(i+1<n && mat[i+1][j]==0)
                    {
                        count++;
                    }
                    // left
                    if(j-1>=0 && mat[i][j-1]==0)
                    {
                        count++;
                    }
                    // right
                    if(j+1<m && mat[i][j+1]==0)
                    {
                        count++;
                    }
                    // up-left
                    if(i-1>=0 && j-1>=0 && mat[i-1][j-1]==0)
                    {
                        count++;
                    }
                    // right d
                    if(i+1<n && j+1<m && mat[i+1][j+1]==0)
                    {
                        count++;
                    }
                    // up rigt
                    if(i-1>=0 && j+1<m && mat[i-1][j+1]==0)
                    {
                        count++;
                    }
                    // left d
                    if(i+1<n && j-1>=0 && mat[i+1][j-1]==0)
                    {
                        count++;
                    }
                    if(count%2==0 && count>0)
                      ans++;
                }
            }
        }
        
        return ans;
    }
};

class Solution {
public:
    int Count(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int ans = 0;

        int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
        int dy[] = {0, 0, -1, 1, -1, 1, 1, -1};

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 1) {
                    int count = 0;
                    for (int k = 0; k < 8; k++) {
                        int ni = i + dx[k];
                        int nj = j + dy[k];
                        if (ni >= 0 && ni < n && nj >= 0 && nj < m && mat[ni][nj] == 0) {
                            count++;
                        }
                    }
                    if (count % 2 == 0 && count > 0) {
                        ans++;
                    }
                }
            }
        }

        return ans;
    }
};