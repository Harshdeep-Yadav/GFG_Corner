
class Solution {
  public:
    int longestPerfectPiece(int arr[], int N) {
        // code here
               int i=0,j=0,len=0;
       deque<int>m;
       deque<int>s;
       while(j<N)
       {
           if(s.empty() || s.back()<arr[j])
           s.push_back(arr[j]);
           else
           {
               while(!s.empty() && s.back()>arr[j])
               s.pop_back();
               s.push_back(arr[j]);
           }
           if(m.empty() || m.back()>arr[j])
           m.push_back(arr[j]);
           else
           {
               while(!m.empty() && m.back()<arr[j])
               m.pop_back();
               m.push_back(arr[j]);
           }
           if(m.front()-s.front()<=1)
           len=max(len,j-i+1);
           else
           {
               while(m.front()-s.front()>1)
               {
                   if(arr[i]==m.front())
                   m.pop_front();
                   if(arr[i]==s.front())
                   s.pop_front();
                   i++;
               }
               len=max(len,j-i+1);
           }
           j++;
       }
       return len;
   
    }
};