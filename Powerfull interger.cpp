class Solution{
public:
    int powerfullInteger(int n,vector<vector<int>> &intervals,int k){
        map<int,int>mp;
        int res=-1;
        for(auto it :intervals){
            mp[it[0]]+=1;
            mp[it[1]+1]-=1;
        }
        int cnt=0;
        for(auto it :mp){
            cnt+=it.second;
            if(cnt>=k){
                res=it.first;
            }
            else if(cnt-it.second>=k){
                res=it.first-1;
            }
        }
        return res;
    }
};
