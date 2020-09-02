//https://leetcode.com/problems/subarray-sums-divisible-by-k/
class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {
        
        int n=A.size();
        int *arr=new int[n];
        
        if(A[0]<0)
        {
            int a=A[0]%K;
            arr[0]=a+K;
        }
        else
        {
            arr[0]=A[0];
        }
        for(int i=1;i<n;i++)
        {
            if(A[i]<0)
            {
                int a=A[i]%K;
                arr[i]=arr[i-1]+(a+K);
            }
            else
            {
                arr[i]=arr[i-1]+A[i];
            }
        }
        map<int,int> m;
        m[0]=1;
        for(int i=0;i<n;i++)
        {
            arr[i]=arr[i]%K;
            m[arr[i]]++;
            
        }
        int count=0;
        map<int,int>::iterator it;
        for(it=m.begin();it!=m.end();it++)
        {
            if(it->second>1)
            {
                int p=it->second;
                count+=((p*(p-1))/2);
            }
        }
        delete []arr;
        return count;
        
        
    }
};