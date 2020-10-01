/*
https://codeforces.com/problemset/problem/1165/B
*/




#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        arr.push_back(k);
    }
    sort(arr.begin(),arr.end());
    vector<int>::iterator lw,up;
    int lower=0;
    for(int i=1;i<=n+1;i++)
    {
        lw=lower_bound(arr.begin()+lower,arr.end(),i);
        up=upper_bound(arr.begin()+lower,arr.end(),i);
        if(lw==arr.end())
        {
            cout<<i-1<<endl;
            break;
        }
        if(lw==up)
        {
            lower=up-arr.begin()+1;
        }
        if(lw-arr.begin()!=up-arr.begin())
        {
            lower=up-arr.begin();
        }
        if(lw-arr.begin()==up-arr.begin()-1)
        {
            lower=up-arr.begin();
        }
        
    }
}

