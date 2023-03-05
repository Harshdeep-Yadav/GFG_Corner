class Solution{
    public:
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        set<vector<int>>stt;
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int st=j+1,en=n-1;
                while(st<en){
                    int s=arr[i]+arr[j]+arr[st]+arr[en]; // sum
                    if(s==k){
                        stt.insert({arr[i],arr[j],arr[st],arr[en]});
                    }
                    if(s<k){
                        st++;
                    }
                    else{
                        en--;
                    }
                }
            }
        }
        vector<vector<int>>ans;
        for(auto it : stt){
            ans.push_back(it);
        }
        return ans;
    }
};