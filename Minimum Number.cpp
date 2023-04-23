class Solution{
public:
    int minimumNumber(int n,vector<int> &arr){
        int odd=0;
        for(auto it:arr){
            if(it%2!=0){
                odd=1;
            }
        }
        if(odd==1) return 1;
        return *min_element(arr.begin(),arr.end());
    }
};
