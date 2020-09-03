/*
https://leetcode.com/problems/container-with-most-water/
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int max_height=0;
        int i=0;
        int n=height.size();
        int j=n-1;
        while(i!=j)
        {
            int cur_height;
            if(height[i]<height[j])
            {
                cur_height=(height[i]*(j-i));
                i++;
            }
            else if(height[i]>height[j])
            {
                cur_height=(height[j]*(j-i));
                j--;
            }
            else
            {
                cur_height=height[i]*(j-i);
                i++;
            }
            max_height=max(cur_height,max_height);
        }
        return max_height;
        
    }
};