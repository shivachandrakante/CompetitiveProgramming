/*
https://leetcode.com/problems/find-the-winner-of-an-array-game/
*/







class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        
        if(k>=arr.size())
        {
            return *max_element(arr.begin(),arr.end());
        }
        if(k==1)
        {
            return max(arr[0],arr[1]);
        }
        deque<int> q;
        for(int i=0;i<arr.size();i++)
        {
            q.push_back(arr[i]);
        }
        int count=0,a,b;
        while(count<k)
        {
            a=q.front();
            q.pop_front();
            if(a<q.front())
            {
                q.push_back(a);
                count=1;
            }
            else
            { 
                int b=q.front();
                q.pop_front();
                q.push_back(b);
                q.push_front(a);
                count++;
            }
        }
        return q.front();
        
    }
};