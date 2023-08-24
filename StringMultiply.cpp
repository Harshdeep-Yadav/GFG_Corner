class Solution{
  public:
    /*You are required to complete below function */
    string multiplyStrings(string s1, string s2) {
       int n =s1.size();
       int m =s2.size();
       
       string res(n+m,'0');
       
       bool isS1neg=false;
       bool isS2neg=false;
       
       if(s1[0]=='-'){
           isS1neg=true;
           s1[0]='0';
       }
       
       if(s2[0]=='-'){
           isS2neg=true;
           s2[0]='0';
       }
       
       
       for(int i=n-1;i>=0;i--){
           for(int j=m-1;j>=0;j--){
               int p=(s1[i]-'0')*(s2[j]-'0')+(res[i+j+1]-'0');
               res[i+j+1]=p%10+'0'; // rem
               res[i+j]+=p/10; //qoutient
           }
       }
       
       for(int i=0;i<n+m;i++){
           // removing the leading zero's
           if(res[i]!='0'){
               res=res.substr(i);
               break;
           }
       }
       
       if(isS1neg && isS2neg){
           return res;
       }
       else if(isS1neg || isS2neg){
           reverse(res.begin(),res.end());
           res+='-';
           reverse(res.begin(),res.end());
           return res;
       }
       else if(!isS1neg && !isS1neg){
           return res;
       }
       return "0";
    }
};