class Solution
{
public:
    int minDist(int a[], int n, int x, int y)
    {
        int xind = -1, yind = -1;

        int mini = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                xind = i;
            }
            if (a[i] == y)
            {
                yind = i;
            }

            if (xind != -1 && yind != -1)
            {
                mini = min(mini, abs(xind - yind));
            }
        }
        return mini == INT_MAX ? -1 : mini;
    }
};