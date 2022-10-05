// class Solution {
//   public:
//     string lexicographicallySmallest(string S, int k) {
//         int n=S.size();
//         if(n%2!=0)
//         {
//             k=k*2;
//         }
//         else
//         {
//             k=k/2;
//         }
//         if(k>n)
//          return "-1";
//         // cout<<k<<" "<<n;
//         stack<char>s;
//         string ans="";
        
//       for(int i=0;i<n;i++){
//             char ch = S[i];
//             while(!s.empty() && s.top() > ch && k>0){
//                 s.pop();
//                 k--;
//             }
//             s.push(ch);
//         }
        
//         while(k>0 && !s.empty()){
//             s.pop();
//             k--;
//         }
        
//         while(k>0 && !s.empty()){
//             s.pop();
//             k--;
//         }
        
//         while(!s.empty()){
//             ans += s.top();
//             s.pop();
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// };

class Solution {
  public:
    string lexicographicallySmallest(string &str, int k) {
        stack<char> s;
        if((str.size()&(str.size()-1))!=0){
            k*=2;
        }
        else{
            k/=2;
        }
        if(k>=str.size()){
            return "-1";
        }
        for(int i = 0;i<str.size();i++){
            if(s.empty()){
                s.push(str[i]);
            }
            else{
                if(str[i]<s.top()){
                    while(!s.empty() and k and str[i]<s.top()){
                        k--;
                        s.pop();
                    }
                }
                s.push(str[i]);
            }
        }
        while(k){
            s.pop();
            k--;
        }
        string ans = "";
        while(!s.empty()){
            ans+=s.top();
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};