class Solution{
    public:
        int modulo(string s,int m)
        {
            int a=0;
            for(auto it:s){
                a=(a*2+it-'0')%m;
                cout<<a<<endl;
            }
            return 0;
        
        }
};