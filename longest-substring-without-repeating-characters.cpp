/*
https://leetcode.com/problems/longest-substring-without-repeating-characters/
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==1)
        {
            return 1;
        }
        if(s.length()==0)
        {
            return 0;
        }
        else
        {
            return helper(s);
        }
        
    }
    int helper(string s)
    {
        unordered_map<char,int> mp;
        mp[s[0]]=0;
        int max_length=0;
        int j=0;
        for(int i=1;i<s.length();i++)
        {
            if(mp.find(s[i])==mp.end())
            {
                mp[s[i]]=i;
                if(max_length<i-j+1)
                {
                    //cout<<s[i]<<" "<<i<<" "<<j<<endl;
                    max_length=i-j+1;
                }
            }
            else
            {
                if(mp[s[i]]>=j)
                {
                    //cout<<mp[s[i]]<<endl;
                    j=mp[s[i]]+1;
                    mp[s[i]]=i;
                    if(max_length<i-j+1)
                    {
                        //cout<<s[i]<<" "<<i<<" "<<j<<endl;
                        max_length=i-j+1;
                    }
                }
                else
                {
                    mp[s[i]]=i;
                    if(max_length<i-j+1)
                    {
                        //cout<<s[i]<<" "<<i<<" "<<j<<endl;
                        max_length=i-j+1;
                    }
                }
            }
        }
        return max_length;
    }
};