/*
https://leetcode.com/problems/move-zeroes/
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int zero_pos=0;
        while(zero_pos<nums.size() and nums[zero_pos]!=0)
        {
            zero_pos++;
        }
        if(zero_pos>=nums.size())
        {
            return;
        }
        for(int i=zero_pos;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                nums[zero_pos]=nums[i];
                nums[i]=0;
                while(zero_pos<nums.size() and nums[zero_pos]!=0)
                {
                    zero_pos++;
                }
            }
        }
        
    }
};