/*
https://leetcode.com/problems/maximum-subarray/
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int max_sum=0;
        int cur_sum=0;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            if(cur_sum<0)
            {
                cur_sum=0;
            }
            cur_sum+=nums[i];
            if(cur_sum>max_sum)
            {
                max_sum=cur_sum;
            }
        }
        if(max_sum==0)
        {
            int sum=INT_MIN;
            for(int i=0;i<n;i++)
            {
                sum=max(nums[i],sum);
            }
            max_sum=sum;
        }
        return max_sum;
        
    }
};