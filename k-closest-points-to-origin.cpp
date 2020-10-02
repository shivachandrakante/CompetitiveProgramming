/*
https://leetcode.com/problems/k-closest-points-to-origin/
*/



class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        
        
        sort(points.begin(),points.end(),[](auto &a,auto&b)
             {
                 return a[0]*a[0]+a[1]*a[1] < b[1]*b[1]+b[0]*b[0];
             });
        points.erase(points.begin()+K,points.end());
        return points;
        
    }
};