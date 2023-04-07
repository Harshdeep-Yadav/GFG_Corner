class Solution{   
public:
    bool isPali(string s){
        int i=0;
        int j=s.size()-1;
        while(i<=j){
            if(s[i]!=s[j]){
                
                return false;
            }
                i++;
                j--;

        }
        return true;
    }
    int addMinChar(string str){    
        for(int i=str.size()-1;i>=0;i--){
            if(isPali(str.substr(0,i+1))){
                return str.size()-i-1;
            }
        }
        return 0;
    }
};