class Solution{
    private:
    inline int diff(int a, int b){
        return a>b?a-b:b-a;
    }
    inline bool compare(map<char, int> v, map<char, int> c){
        return (v.begin()->first < c.begin()->first);
    }
public:
    string rearrange (string S, int N)
    {
        map<char, int> vow;
        map<char, int> con;
        int c=0, v=0;
        
        for(int i=0; i<N; i++){
            if(S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u'){
                v++;
                vow[S[i]]++;
            }
            else{
                c++;
                con[S[i]]++;
            }
        }
        
        if(diff(v, c) > 1)
            return "-1";
            
        bool cmp=compare(vow, con);
            
        
        if(v > c || (v==c && cmp)){
            int i=0;
            for(auto it: vow){
                int till=it.second;
                while(till--){
                    S[i]=it.first;
                    i+=2;
                }
            }
            i=1;
            for(auto it: con){
                int till=it.second;
                while(till--){
                    S[i]=it.first;
                    i+=2;
                }
            }
        }
        else if(v < c || (v==c && !cmp)){
            int i=0;
            for(auto it: con){
                int till=it.second;
                while(till--){
                    S[i]=it.first;
                    i+=2;
                }
            }
            i=1;
            for(auto it: vow){
                int till=it.second;
                while(till--){
                    S[i]=it.first;
                    i+=2;
                }
            }
        }
        return S;
    }
};
