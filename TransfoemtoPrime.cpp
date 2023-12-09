class Solution
{
public:
    bool prime(int x)
    {
        for (int i = 2; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                return false;
            }
        }
        return true;
    }
    int minNumber(int arr[], int n)
    {
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        int x = sum;
        if (x == 1)
        {
            return 1;
        }
        while (true)
        {
            if (prime(sum))
            {
                break;
            }
            sum++;
        }
        return sum - x;
    }
};