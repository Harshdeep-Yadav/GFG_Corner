class Solution {
  public:
    int finLength(int n, vector<int> color, vector<int> radius) {
        stack<pair<int,int>>st;
        st.push({color[0],radius[0]});
        for(int i=1;i<n;i++){
            pair<int,int>x={color[i],radius[i]};
            if(!st.empty()&&st.top()==x){
                st.pop();
            }
            else{
                st.push(x);
            }
        }
        return st.size();
    }
};