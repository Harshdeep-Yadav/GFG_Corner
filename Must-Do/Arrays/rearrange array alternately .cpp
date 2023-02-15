class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	deque<long long> v;

        for(int i=0; i<n; i++)

        {

            v.push_back(arr[i]);

        }

        int i=0;

        while(i<n)

        {

            arr[i]=v.back();

            v.pop_back();

            i++;

            arr[i]=v.front();

            v.pop_front();

            i++;

        }
    	 
    }
};