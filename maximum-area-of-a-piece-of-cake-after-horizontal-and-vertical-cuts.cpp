/*
https://leetcode.com/problems/maximum-area-of-a-piece-of-cake-after-horizontal-and-vertical-cuts/
*/




class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        long long max_hori=horizontalCuts[0];
        long long max_ver=verticalCuts[0];

        for(int i=1;i<horizontalCuts.size();i++)
        {
            long long cur_max=horizontalCuts[i]-horizontalCuts[i-1];
            max_hori=max(max_hori,cur_max);
        }
        max_hori=max_hori>h-horizontalCuts[horizontalCuts.size()-1]?max_hori:h-horizontalCuts[horizontalCuts.size()-1];
        for(int i=1;i<verticalCuts.size();i++)
        {
            long long cur_max=verticalCuts[i]-verticalCuts[i-1];
            max_ver=max(max_ver,cur_max);
        }
        max_ver=max_ver>w-verticalCuts[verticalCuts.size()-1]?max_ver:w-verticalCuts[verticalCuts.size()-1];
        return (max_ver*max_hori)%1000000007;
        
    }
};