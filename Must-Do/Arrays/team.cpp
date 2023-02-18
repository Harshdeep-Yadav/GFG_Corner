#include<bits/stdc++.h>
using namespace std;
int main(){
    int cnt=0;
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b==2||b+c==2||c+a==2){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;

}