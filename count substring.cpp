
class Solution
{
    public:
    int countSubstring(string s)
    {
       int cnt=0;
       int n =s.length();
       for(int i=0;i<n;i++){
           int ucnt=0;
           int lcnt=0;
           for(int j=i;j<n;j++){
               if(islower(s[j])){
                   lcnt++;
               }else{
                   ucnt++;
               }
           
           if(ucnt==lcnt){
               cnt++;
           }
         }
      }
       return cnt;
    }
};