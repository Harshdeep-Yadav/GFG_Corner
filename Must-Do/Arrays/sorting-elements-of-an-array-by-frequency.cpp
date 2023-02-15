#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>&a,pair<int,int>&b){
    if(a.first==b.first){
        return a.second<b.second;
    }
    return a.first>b.first;
}
vector<int>solve(vector<int>num,int x){
    unordered_map<int,int>mp;
    for(auto it : num){
        mp[it]++;
    }
    vector<pair<int,int>>v;
    for(auto it : mp){
        v.push_back({it.second,it.first});
    }
    sort(v.begin(),v.end(),comp);
    vector<int>res;
    for(auto it: v){
        int size=it.first;
        while(size--){
            res.push_back(it.second);
        }
    }
    return res;
}
int main (){
    int t;
    // cout<<"Enter t"<<endl
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>num;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            num.push_back(a);
        }
        vector<int>res=solve(num,n);
        for(auto it : res){
            cout<<it<<" ";
        }
            cout<<endl;
    }
    return 0;
}
