class Solution {
  public:
    int shortestXYDist(vector<vector<char>> grid, int N, int M) {
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>vis(N,vector<int>(M,0));
        
       for(int i=0;i<N;i++){
           for(int j=0;j<M;j++){
               if(grid[i][j]=='X'){
                   q.push({{i,j},0});
                   vis[i][j]=1;
               }
           }
       }
       
       int ans =INT_MAX;
       
       int dr[]={-1,1,0,0};
       int dc[]={0,0,-1,1};
       
       while(!q.empty()){
          auto it =q.front();
          q.pop();
          
          int r=it.first.first;
          int c=it.first.second;
          
          int dis=it.second;
          
          if(grid[r][c]=='Y'){
              ans=min(ans,dis);
          }
          
          for(int i=0;i<4;i++){
              int nr=r+dr[i];
              int nc=c+dc[i];
              
              if(nr>=0 && nr<N &&nc>=0&& nc<M && vis[nr][nc]==0){
                  q.push({{nr,nc},dis+1});
                  vis[nr][nc]=1;
              }
          }
       }
       if(ans!=INT_MAX)
            return ans;
       return -1;
    }
};


