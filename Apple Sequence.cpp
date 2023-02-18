class Solution{   
public:
    int appleSequences(int n, int m, string arr){
        
        int maxi=INT_MIN;
        int e=0,s=0;
        int cnt=0;
        while(e<n){
            if(arr[e]=='O')
                cnt++;
            
            while(s<n && cnt>m){
                if(arr[s]=='O') cnt--;
                s++;
            }
            
            maxi=max(maxi,e-s+1);
            e++;
        }
        return maxi;
    }
};