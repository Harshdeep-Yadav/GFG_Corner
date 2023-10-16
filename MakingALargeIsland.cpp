// class DisjointSet{
// public:
// vector<int>rank,parent,size;
// DisjointSet(int n){
//     rank.resize(n+1,0);
//     parent.resize(n+1);
//     size.resize(n+1);
//     for(int i=0;i<n;i++){
//         parent[i]=i;
//         size[i]=1;
//     }
// }

// int findUPar(int node){
//     if(node==parent[node]){
//         return node;
//     }
//     return parent[node]=findUPar(parent[node]);
//   }

//   void unionByRank(int u ,int v){
//     int ulp_u=findUPar(u);
//     int ulp_v=findUPar(v);
//     if(ulp_u==ulp_v) return;
//     if(rank[ulp_u]<rank[ulp_v]){
//         parent[ulp_u]=ulp_v;
//     }
//     else if(rank[ulp_v]<rank[ulp_u]){
//         parent[ulp_v]=ulp_u;
//     }
//     else{
//         parent[ulp_v]=ulp_u;
//         rank[ulp_u]++;
//     }
//   }
//     void unionBySize(int u,int v){
//     int ulp_u=findUPar(u);
//     int ulp_v=findUPar(v);
//     if(ulp_u==ulp_v) return;
//     if(size[ulp_u]<size[ulp_v]){
//         parent[ulp_u]=ulp_v;
//         size[ulp_v]+=size[ulp_u];
//     }
//     else{
//         parent[ulp_v]=ulp_u;
//         size[ulp_u]+=size[ulp_v];
//      }
//     }
// };
// class Solution{
//     private:
//     bool isValid(int newr,int newc,int n){
//         return newr>=0 && newr<n && newc>=0 && newc<n;
//     }
// public:
//     int largestIsland(vector<vector<int>>& grid)
//     {
//       int n=grid.size();
//       DisjointSet ds(n*n);
//       // step-1 connecting component's
//       for(int row=0;row<n;row++){
//           for(int col=0;col<n;col++){
//               if(grid[row][col]==0) continue;
//               int dr[]={-1,0,1,0};
//               int dc[]={0,-1,0,1};
//               for(int ind=0;ind<4;ind++){
//                   int newr=ind+dr[ind];
//                   int newc=ind+dc[ind];
//                   if(isValid(newr,newc,n) && grid[newr][newc]==1){
//                       int nodeNo=row*n+col;
//                         int adjNodeNo=newr*n+newc;
//                       ds.unionBySize(nodeNo,adjNodeNo);
//                   }
//               }
//           }
//       }

//       // step-2
//       int maxi=0;
//       for(int row=0;row<n;row++){
//           for(int col=0;col<n;col++){
//               if(grid[row][col]==1) continue;
//               int dr[]={-1,0,1,0};
//               int dc[]={0,-1,0,1};
//               set<int>components; // unique
//               for(int ind=0;ind<4;ind++){
//                   int newr=ind+dr[ind];
//                   int newc=ind+dc[ind];
//                   if(isValid(newr,newc,n)){
//                       if(grid[newr][newc]==1){
//                           components.insert(ds.findUPar(newr*n+newc));
//                       }
//                   }
//               }

//               int sizeTot=0;
//               for(auto it :components){
//                   sizeTot+=ds.size[it];
//               }
//               maxi=max(maxi,sizeTot+1);
//           }
//       }

//       for(int cellNo=0;cellNo<n*n;cellNo++){
//           maxi=max(maxi,ds.size[ds.findUPar(cellNo)]);
//       }
//       return maxi;
//     }
// };

class DisjointSet
{
public:
    vector<int> Size, parent;

    DisjointSet(int n)
    {
        Size.resize(n + 1, 1);
        parent.resize(n + 1);
        for (int i = 0; i <= n; ++i)
            parent[i] = i;
    }

    int findUpar(int node)
    {
        if (node == parent[node])
            return node;
        return parent[node] = findUpar(parent[node]);
    }

    void unionBySize(int u, int v)
    {
        int ulp_u = parent[u];
        int ulp_v = parent[v];

        if (Size[ulp_u] < Size[ulp_v])
        {
            parent[ulp_u] = ulp_v;
            Size[ulp_v] += Size[ulp_u];
        }
        else
        {
            parent[ulp_v] = ulp_u;
            Size[ulp_u] += Size[ulp_v];
        }
    }
};

class Solution
{
public:
    int largestIsland(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int dSize = n * n;
        DisjointSet ds(dSize);

        int dx[4] = {-1, 0, 1, 0};
        int dy[4] = {0, -1, 0, 1};

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (grid[i][j] == 0)
                    continue;

                int index = i * n + j;
                for (int k = 0; k < 4; ++k)
                {
                    int di = i + dx[k];
                    int dj = j + dy[k];

                    if (di >= 0 && di < n && dj >= 0 && dj < n && grid[di][dj] == 1)
                    {
                        int adjIndex = di * n + dj;
                        if (ds.findUpar(index) != ds.findUpar(adjIndex))
                        {
                            ds.unionBySize(index, adjIndex);
                        }
                    }
                }
            }
        }

        int largeIsland = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (grid[i][j] == 1)
                    continue;
                set<int> st;
                for (int k = 0; k < 4; ++k)
                {
                    int di = i + dx[k];
                    int dj = j + dy[k];

                    if (di >= 0 && di < n && dj >= 0 && dj < n && grid[di][dj] == 1)
                    {
                        int adjIndex = di * n + dj;
                        st.insert(ds.findUpar(adjIndex));
                    }
                }
                int tempIsland = 1;
                for (auto it : st)
                {
                    tempIsland += ds.Size[it];
                }
                largeIsland = max(largeIsland, tempIsland);
            }
        }

        for (int i = 0; i < dSize; ++i)
        {
            largeIsland = max(largeIsland, ds.Size[i]);
        }

        return largeIsland;
    }
};
