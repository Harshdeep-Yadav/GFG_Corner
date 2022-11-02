
class Solution
{
    public:
        int largestArea(int n,int m,int k,vector<vector<int>> &enemy)
        {
            vector<int> rows,col;
            rows.push_back(0);
            col.push_back(0);
            for(auto i: enemy)
            {
                rows.push_back(i[0]);
                col.push_back(i[1]);
            }
            int maxr=0,maxc=0;
            rows.push_back(n+1);
            col.push_back(m+1);
            sort(rows.begin(),rows.end());
            sort(col.begin(),col.end());
            for(int i=0;i<rows.size();i++)
            {
                maxr=max(maxr,rows[i]-rows[i-1]-1);
            }
            for(int i=0;i<col.size();i++)
            {
                maxc=max(maxc,col[i]-col[i-1]-1);
            }
            return maxr*maxc;
            
        }
