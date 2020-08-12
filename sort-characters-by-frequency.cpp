//leet Code Link-- https://leetcode.com/problems/sort-characters-by-frequency/

class str
{
    public:
        char c;
        int x;
};
bool compare(str a,str b)
{
    return a.x>b.x;
}

class Solution {
public:
    

    string frequencySort(string s) {
        
        map<char,int> mp;
        for(auto x:s)
        {
            mp[x]++;
        }
        str* arr=new str[mp.size()];
        int j=0;
        for(map<char,int>::iterator it=mp.begin();it!=mp.end();it++)
        {
            arr[j].c=it->first;
            arr[j].x=it->second;
            j++;
        }
        sort(arr,arr+mp.size(),compare);
        string str="";
        for(j=0;j<mp.size();j++)
        {
            string k="";
            char c=arr[j].c;
            for(int i=0;i<arr[j].x;i++)
            {
                k+=c;
            }
            str+=k;
        }
        return str;
        
    }
};