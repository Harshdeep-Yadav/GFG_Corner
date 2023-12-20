class Solution {
public:
    int buyChoco(vector<int>& p, int m) {
        sort(p.begin(),p.end());
        int sum=0;
        sum+=p[0]+p[1];
        if(sum<=m){
            return m-sum;
        }
        return m;
    }
};