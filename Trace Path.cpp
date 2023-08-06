class Solution{
public:
    int isPossible(int n, int m, string s){
        int minx = 0, maxx = 0, miny = 0, maxy = 0;
        int dx = 0, dy = 0;
        for(char it:s){
            if(it=='L'){
                dx--;
            }
            if(it=='R')
                dx++;
            if(it=='U')
                dy++;
            if(it=='D')
                dy--;
            
            minx=min(minx,dx);
            maxx=max(maxx,dx);
            miny=min(miny,dy);
            maxy=max(maxy,dy);
        }
        return int(maxx-minx<m && maxy-miny<n);
    }
};
