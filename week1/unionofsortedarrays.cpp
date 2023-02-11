#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        int c = 0;
        set<int> s;
        for(int i=0;i<n;i++)
        {
            s.insert(a[i]);
        }
        for(int i=0;i<m;i++)
        {
            s.insert(b[i]);
        }
        return s.size();

        // int i=0,j=0,c=0;
        // while(i<n && j<m)
        // {
        //     if(a[i] < a[j])
        //     {
        //         c++;
        //         i++;
        //     }
        //     else if(a[i] > a[j])
        //     {
        //         c++;
        //         j++;
        //     }
        //     else
        //     {
        //         c++;i++;j++;
        //     }
        // }
        // while(i<n)
        // {
        //     c++;i++;
        // }
        // while(j<m)
        // {
        //     c++;j++;
        // }
        // return c;
    }
};