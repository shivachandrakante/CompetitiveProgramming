/*
https://leetcode.com/problems/sliding-window-maximum/
*/






public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k==1)
        {
            return nums;
        }
        vector<int> vec;
        deque<int> q;
        int i=0;
        for(;i<k;i++)
        {
            while(!q.empty() and nums[i]>=nums[q.back()])
            {
                q.pop_back();
            }
            q.push_back(i);
        }
        for(;i<nums.size();i++)
        {
            vec.push_back(nums[q.front()]);
            while(!q.empty() and q.front()<=i-k)
            {
                q.pop_front();
            }
            while(!q.empty() and nums[i]>=nums[q.back()])
            {
                q.pop_back();
            }
            q.push_back(i);
        }
        
        vec.push_back(nums[q.front()]);
        return vec;
    }
};