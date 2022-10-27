class Solution {
  public:
    vector<int> leafNodes(int arr[],int N) {
        vector<int>ans;
        stack<int>st;
        st.push(arr[0]);
        int temp=0;
        for(int i=1;i<N;i++)
        {
            if(st.top()>arr[i])
            {
                st.push(arr[i]);
            }
            else
            {
                 temp=st.top();
                 int removed=0; // removing element untill not able to find greater to the curr elem in stack
                 while(!st.empty() && st.top()<arr[i])
                 {
                     st.pop();
                     removed++;
                 }
                 st.push(arr[i]);
                 if(removed>=2)
                 {
                     ans.push_back(temp);
                 }
            }
        }
        ans.push_back(st.top());
        return ans;
    }
};
