class Solution
{
    int median(int matrix[][], int R, int C)
    {
        int[] ans=new int[R*C];
        int k=0;
        for(int i=0; i<R; i++)
        {
            for(int j=0; j<C; j++)
            {
                ans[k++]=matrix[i][j];
            }
        }
        
        Arrays.sort(ans);
        
        return ans[ans.length/2];
    }
}