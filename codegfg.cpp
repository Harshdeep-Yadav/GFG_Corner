class Solution{
public:
void f(int n , vector<int>&ans){
    if(n<=0){
        ans.push_back(n);
        return ;
    }
    ans.push_back(n);
    f(n-5,ans);
    ans.push_back(n);
}
    vector<int> pattern(int N){
        vector<int>ans;
        f(N,ans);
        return ans ;
    }
};