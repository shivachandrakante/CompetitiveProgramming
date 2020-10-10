/*
https://leetcode.com/problems/single-number/
*/


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            int lw=lower_bound(nums.begin(),nums.end(),nums[i])-nums.begin();
            int up=upper_bound(nums.begin(),nums.end(),nums[i])-nums.begin();
            if(lw==up-1)
            {
                return nums[i];
            }
        }
        return nums[nums.size()-1];
        
        
    }
};