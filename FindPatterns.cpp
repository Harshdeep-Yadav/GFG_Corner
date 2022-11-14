class Solution{   
public:
    int numberOfSubsequences(string S, string W){
        // code here
        int w = 0;
        for(int i=0; i<S.size(); i++)
        {
            if(S[i] == W[w]){
                w++;
                S[i] = ' ';
            }
            if(w == W.size()) break;
        }
        
        if(w == W.size()) 
        return 1 + numberOfSubsequences(S , W);
        return 0;
    }
};