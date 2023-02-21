class Solution{   
public:
int minIteration(int N, int M, int x, int y){    
        // code here
        int dx[]={0,1,0,-1};
        int dy[]={-1,0,1,0};
        vector<vector<int>>vis(N,vector<int>(M,0));
        queue<pair<int,int>>q;
        q.push({x-1,y-1});
        vis[x-1][y-1]=1;
        int ans=0;
        while(!q.empty()){
            int n=q.size();
            while(n--){
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            for(int k=0;k<4;k++){
                int nr=i+dx[k];
                int nc=j+dy[k];
                if(nr>=0 and nr<N and nc>=0 and nc<M and vis[nr][nc]==0){
                    vis[nr][nc]=1;
                    q.push({nr,nc});
                }
            }
            }
            ans++;
        }
        return ans-1;
    }
    // int minIteration(int N, int M, int X, int Y){ // bfs  
    
    //     vector<vector<int>>mat(N,vector<int>(M,0));
    //     queue<pair<int,int>>q;
    //     q.push({X-1,Y-1});
    //     mat[X-1][Y-1]=1;
        
    //     int dx[]={0,1,0,-1};
    //     int dy[]={-1,0,1,0};
        
    //     int cnt=0;
    //     while(!q.empty()){
            
    //       int size=q.size();
           
    //       while(size--){
    //           int x=q.front().first;
    //           int y=q.front().second;
    //           q.pop();
    //           for(int k=0;k<k;k++){
    //               int nr=x+dx[k];
    //               int nc=y+dy[k];
    //               if(nr>=0&&nr<N&&nc>=0&&nc<M&&mat[nr][nc]==0){
    //                   mat[nr][nc]=1;
    //                   q.push({nr,nc});
    //               }
    //           }
    //       }
    //           cnt++;
    //     //     //   checking now for up
    //     //     if(x>1&&mat[x-1][y]==0){
    //     //         q.push({x-1,y});
    //     //         mat[x-1][y]=1;
    //     //     }
    //     //     // for left
    //     //      if(y>1&&mat[x][y-1]==0){
    //     //         q.push({x,y-1});
    //     //         mat[x][y-1]=1;
    //     //     }
    //     //     // for down
    //     //      if(x>N&&mat[x+1][y]==0){
    //     //         q.push({x+1,y});
    //     //         mat[x+1][y]=1;
    //     //     }
    //     //     // for right
    //     //      if(y<M&&mat[x][y+1]==0){
    //     //         q.push({x,y+1});
    //     //         mat[x][y+1]=1;
    //     //      }
    //     //   }
        
    //     //   if(!q.empty()){
    //     //       cnt++;
    //     //   }
    //     }
    //     return cnt-1;
    // }
};