class Solution {
  public:
  
    vector<int> satisfyEqn(int a[], int n) {
       unordered_map<int, set<pair<int,int>>>mp;
        for(int i = 0 ; i < n ; i++ ){
            for(int j = 0 ; j < n ; j++ ){
                if( i != j )
                    mp[a[i]+a[j]].insert( {i, j} ) ;
            }
        }
        
        for(int i = 0 ; i < n ; i++ ){
            for(int j = i+1 ; j < n ; j++ ){
                int tar = a[i] + a[j] ;
                if( mp.find(tar) != mp.end() ){
                    for( auto it : mp[tar] ){
                        if( it.first == i || it.first == j )
                            continue ;
                        if( it.second == i || it.second == j )
                            continue ;
                        
                        return { i, j, it.first, it.second } ;
                    }  
                }
            }
        }
        return {-1, -1, -1, -1} ;
    // {
    //     vector<vector<int>>res;
    //     unordered_map<int,pair<int,int>> mp;
    //     for(int i=0;i<N;i++)
    //     {
    //       for(int j=i+1;j<N;i++)
    //       {
    //           int sum=A[i]+A[j];
    //           if(mp.find(sum)!=mp.end())
    //           {
    //             pair<int,int>p=mp[sum];
    //                 if(i!=p.first && i!=p.second && j!=p.first && j!=p.second)
    //                 {
    //                     res.push_back({p.first,p.second,i,j});
    //                 }
    //           }
    //           else
    //             mp[sum]={i,j};
               
    //       }
    //     }
    //     if(res.size()==0)
    //      return {-1,-1,1,-1};
    //     sort(res.begin(),res.end());
    //     return res[0];
    }
};