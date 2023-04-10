class Solution
{

public:
    int solve(int n, int k, vector<int> &stalls)
    {

        sort(stalls.begin(), stalls.end());

        int si = 0;

        int ei = stalls[n - 1];

        int ans = 0;

        int mid = -1;

        while (si <= ei)
        {

            mid = si + (ei - si) / 2;

            if (isPossible(stalls, n, k, mid))
            {

                ans = mid;

                si = mid + 1;
            }

            else
            {

                ei = mid - 1;
            }
        }

        return ans;
    }

    bool isPossible(vector<int> &stalls, int n, int k, int m)
    {

        k--;

        int prev = 0;

        for (int i = 1; i < n; i++)
        {

            if (stalls[i] - stalls[prev] >= m)
            {

                k--;

                prev = i;
            }
        }

        return k <= 0;
    }
}; //