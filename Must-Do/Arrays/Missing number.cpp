class Solution{
  public:
    int MissingNumber(vector<int>& nums, int n) {
  
        return n*(n+1)/2 - accumulate(nums.begin(),nums.end(),0);
    }
};