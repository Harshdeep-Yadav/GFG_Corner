class Solution
{
public:
    int countTriplets(vector<int> nums)
    {
        // Code here.
        int count = 0;
        int length = nums.size();
        for (int i = 1; i < length - 1; i++)
        {
            int temp = 0;
            for (int j = i + 1; j < length; j++)
                if (nums[j] > nums[i])
                    temp++;
            int temp1 = 0;
            for (int j = i - 1; j >= 0; j--)
                if (nums[j] < nums[i])
                    temp1++;
            count += temp * temp1;
        }
        return count;
    }
};