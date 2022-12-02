class Solution {
  public:
    int isItPossible(string S, string T, int m, int n) {
        // code here
        
        if(n!=m)return 0;
        int ca=0,cb=0,ca1=0,cb1=0;
        for(auto it:s){
            if(it=='A')ca++;
            else if(it=='B')cb++;
        }
        for(auto it:t){
           if(it=='A')ca1++;
            else if(it=='B')cb1++; 
        }
      
        if(ca!=ca1||cb!=cb1)return 0;
         int i=0,j=0;
         int cnt1=0;
         int cnt2=0;
         stack<int>s1;
         //chk1 stores how many A to be shifted to left 
         //chk2 stores how many B to be shifted to right
         while(i<n&&j<n){
             if(s[i]=='#')i++;
             if(t[j]=='#')j++;
             if(t[j]=='A'){
                 cnt1++;
                 s1.push(j);
                 j++;
             }
            if(s[i]=='A'){
                if(cnt1==0)return 0;
                if(cnt2>0)return 0;
                if(i<s1.top())return 0;
                cnt1--;
                s1.pop();
                s[i]='#';
                i++;
            }
            if(s[i]=='B'){
                cnt2++;
               
                s[i]='#';
                i++;
            }
            if(t[j]=='B'){
                
                if(cnt1>0)return 0;
                if(cnt2==0)return 0;
            
               
                cnt2--;
                j++;
            }
         }
         for(auto it:s)if(it!='#')return 0;
         
         return 1;
    }
    
};
