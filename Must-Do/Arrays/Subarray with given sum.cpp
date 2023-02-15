class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s){
        long long curr_sum=0;
        int st=0,e=0;
        vector<int>ans;
        
        while(st<n){
            if(curr_sum==s){
                ans.push_back(st+1);
                ans.push_back(e);
                return ans;
            }
            
            if (s>curr_sum){
                curr_sum+=arr[e];
                e++;
            }
            else 
            {
        
                curr_sum-=arr[st];
                st+=1;
            }
        }
        return {-1};
    }
};
