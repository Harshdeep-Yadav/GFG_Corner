class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
        int cnt=0;
        sort(arr.begin(),arr.begin()+(n/2));
        sort(arr.begin()+(n/2),arr.end());
        
        int i=0;
        int j=n/2;
        while(i<n/2 && j<n){
            if(arr[i]>=5*arr[j]){
                cnt+=n/2-i;
                j++;
            }
            else{
                i++;
            }
        }
        return cnt;
    }  
};