class Solution{
public:
    string findLargest(int N, int S){
        string dig="0123456789";
        
        if(S>9*N){
            return "-1";
        }
        if(S==0 && N>1){
            return "-1";
        }
        
        
        string res;
        
        while(N--){
            if(S>=9){
                res+=9+'0';
                S-=9;
            }
            else if(S>=0){
                res+=dig[S];
                S=0;
            }
        }
        
        return res;
    }
};