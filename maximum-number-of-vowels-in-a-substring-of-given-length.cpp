/*
https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/
*/





class Solution {
public:
    int maxVowels(string s, int k) {
        
        int max_length=0;
        int n=s.length();
        int *arr=new int[n];
        if(s[0]=='a' or s[0]=='e' or s[0]=='i' or s[0]=='o' or s[0]=='u')
        {
            arr[0]=1;
        }
        else
        {
            arr[0]=0;
        }
        for(int i=1;i<n;i++)
        {
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u')
            {
                arr[i]=arr[i-1]+1;
            }
            else
            {
                arr[i]=arr[i-1];
            }
        }
        max_length=arr[k-1];
        for(int i=k;i<n;i++)
        {

            if(max_length<arr[i]-arr[i-k])
            {
                max_length=arr[i]-arr[i-k];
            }
        }
        delete [] arr;
        return max_length;
    }
};