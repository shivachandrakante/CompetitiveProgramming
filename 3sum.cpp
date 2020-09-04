/*
https://leetcode.com/problems/3sum/
*/


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int> > vec;
        int a,b,c;
        for(int i=0;i<n-2;i++)
        {
            if(i==0 || nums[i-1]!=nums[i])
            {
                int j=i+1;
                int k=n-1;
                while(j<k)
                {
                    int sum=nums[i]+nums[j]+nums[k];
                    if(sum==0)
                    {
                        vec.push_back({nums[i],nums[j],nums[k]});
                        while(j<k && nums[j]==nums[j+1])j++;
                        while(j<k && nums[k]==nums[k-1])k--;
                        j++;
                        k--;
                    }
                    else if(sum>0)k--;
                    else j++;
                }
            }
        }
        return vec;
        
    }
};