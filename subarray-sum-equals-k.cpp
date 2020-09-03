/*
https://leetcode.com/problems/subarray-sum-equals-k/
*/
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int n=nums.size();
        int *arr=new int[n];
        arr[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            arr[i]=arr[i-1]+nums[i];
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==k)
            {
                count++;
            }
            for(int j=0;j<i;j++)
            {
                if(arr[i]-arr[j]==k)
                {
                    count++;
                }
            }

        }
        delete []arr;
        return count;
        
    }
};