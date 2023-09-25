class Solution {
  public:
    static bool comp(int a ,int b){
        return a>b;
    }
    vector<int> maxCombinations(int n, int k, vector<int> &a, vector<int> &b) {
       vector<int>res;
       sort(a.begin(),a.end(),comp);
       sort(b.begin(),b.end(),comp);
       
       priority_queue<pair<int,pair<int,int>>>pq;
       set<pair<int,int>>st;
       pq.push({a[0]+b[0],{0,0}});
       
       while(!pq.empty()){
           
           auto it =pq.top();
           int val=it.first;
           int i=it.second.first;
           int j=it.second.second;
           
           res.push_back(val);
           pq.pop();
           
           if(res.size()==k) 
             return res;
           
           if(i+1<n && j<n){
               if(st.find({i+1,j})==st.end()){
                   pq.push({a[i+1]+b[j],{i+1,j} });
                   st.insert({i+1,j});
               }
           }
           
           if(i<n && j+1<n){
               if(st.find({i,j+1})==st.end()){
                   pq.push({a[i]+b[j+1],{i,j+1}});
                   st.insert({i,j+1});
               }
           }
       }
       return res;
    }
};