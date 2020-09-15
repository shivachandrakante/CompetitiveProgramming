/*
https://leetcode.com/problems/first-missing-positive/
*/




class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int n=nums.size();
        if(n==0) return 1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<=n;i++)
        {
            int p=lower_bound(nums.begin(),nums.end(),i)-nums.begin();
            int q=upper_bound(nums.begin(),nums.end(),i)-nums.begin();
            if(p==q)
            {
                return i;
            }
        }
        return n+1;
        
    }
};