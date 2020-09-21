/*
https://leetcode.com/problems/number-of-sub-arrays-with-odd-sum/
*/

class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int MOD=1000000007;
        int odd=0;
        int even=1;
        int n=arr.size();
        
        int *a=new int[arr.size()];
        a[0]=arr[0];
        int *b=new int[arr.size()];
        if(a[0]%2!=0)
        {
            b[0]=even;
            odd++;
        }
        else{
            b[0]=odd;
            even++;
        }
        for(int i=1;i<n;i++)
        {
            a[i]=a[i-1]+arr[i];
            if(a[i]%2==0)
            {
                b[i]=odd;
                even++;
            }
            else{
                b[i]=even;
                odd++;
            }
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=(sum+b[i])%MOD;
        }
        delete []a;
        delete []b;
        return sum;
    }
};