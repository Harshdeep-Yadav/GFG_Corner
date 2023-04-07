
#define pb push_back
class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        stack<int>st;
        int n =arr.size();
        
        for(int i=0;i<n;i++){
            if(st.empty()){
                st.push(arr[i]);
            }
            else{
                if(st.top()<0 && arr[i]>=0){
                    st.pop();
                }
                else if(st.top()>=0 && arr[i]<0){
                    st.pop();
                }
                else{
                    st.push(arr[i]);
                }
            }
        }
        
        vector<int>res;
        while(!st.empty()){
            res.pb(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};