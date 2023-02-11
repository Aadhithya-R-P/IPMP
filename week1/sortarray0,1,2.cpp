#include <bits/stdc++.h>

using namespace std;

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // int c0=0,c1=0,c2=0;
        // for(int i=0;i<n;i++)
        // {
        //     if(a[i] == 0)
        //     {
        //         c0++;
        //     }
        //     else if(a[i] == 1)
        //     {
        //         c1++;
        //     }
        //     else
        //     {
        //         c2++;
        //     }
        //     a[i] = 0;
        // }
        // for(int i=c0;i<n;i++)
        // {
        //     if(i<c0+c1)
        //     {
        //         a[i] = 1;
        //     }
        //     else
        //     {
        //         a[i] = 2;
        //     }
        //}
        
        int lo=0,mid=0,hi=n-1;
        while(mid<=hi)
        {
            switch(a[mid])
            {
                case 0:
                    swap(a[lo],a[mid]);
                    mid++;
                    lo++;
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(a[mid],a[hi]);
                    hi--;
                    break;
            }
            
        }
    }
    
};