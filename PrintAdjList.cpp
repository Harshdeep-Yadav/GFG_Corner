class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
        vector<vector<int>>res(V);
        for(auto it: edges){
            res[it.first].push_back(it.second);
            res[it.second].push_back(it.first);
        }
        return res;
    }
};