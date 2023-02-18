class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totSum=accumulate(nums.begin(),nums.end(),0);
        int curSum=0;
        for(int i=0;i<nums.size();i++){
            totSum-=nums[i];
            if(curSum==totSum){
               return  i;
            }
            curSum+=nums[i];
        }
        return -1;
    }
};