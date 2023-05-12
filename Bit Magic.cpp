class Solution
{
public:
    int bitMagic(int n, vector<int> &arr)
    {
        int cnt = 0;
        int i = 0;
        int j = n - 1;
        while (i < j)
        {
            if (arr[i] != arr[j])
            {
                cnt++;
            }
            i++;
            j--;
        }
        if (cnt % 2 == 0)
            return cnt / 2;
        return cnt / 2 + 1;
    }
};
