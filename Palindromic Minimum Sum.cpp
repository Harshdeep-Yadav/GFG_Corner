
class Solution {
  public:
    int minimumSum(string s) {
        int n = s.size();
        int l=0;
        int h=n-1;
        while(l<h){
            if(s[l]!=s[h]){
                if(s[l]=='?'){
                    s[l]=s[h];
                }
                else if(s[h]=='?'){
                    s[h]=s[l];
                }
                else
                    return -1;
            }
            l++;
            h--;
        }
        
    // ---->>>ccalculating minimum sun here---->>>
    
       int res=0;
       char a='?';
       for(int i=0;i<n;i++){
           if(s[i]!='?'){
               if(a=='?'){
                   a=s[i];
               }
               else{
                   res+=abs(int(s[i]-a));
                   a=s[i];
               }
           }
       }
       return res;
    }
};








