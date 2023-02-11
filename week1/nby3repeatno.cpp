#include <bits/stdc++.h>

using namespace std;

//with O(n) SC

// int repeatedNumber(const vector<int> &A) {
//     int n=A.size();
//     unordered_map<int,int> m;
//     for(int i=0;i<n;i++)
//     {
//         if(m[A[i]])
//         {
//             m[A[i]] = m[A[i]]+1;
//         }
//         else
//         {
//             m[A[i]] = 1;   
//         }
//     }
//     for(auto i:A)
//     {
//         if(m[i] > n/3)
//             return i;
//     }
//     return -1;
// }

//with O(1) SC
//Done with the help of Boyer-Moore Majority voting algorithm but with 2 counts and votes... Why??(Doubt)

int repeatedNumber(const vector<int> &A) {
    int maj1=INT_MAX,votes1=0,maj2=INT_MAX,votes2=0,n=A.size();
    for(int i=0;i<n;i++)
    {
        if(maj1 == A[i])
        {
            votes1++;
        }
        else if(maj2 == A[i])
        {
            votes2++;
        }
        else if(votes1 == 0)
        {
            votes1++;
            maj1 = A[i];
        }
        else if(votes2 == 0)
        {
            votes2++;
            maj2 = A[i];
        }
        else
        {
            votes1--;
            votes2--;
        }
    }
    
    int count1 = 0,count2 = 0;
    for(int i=0;i<n;i++)
    {
        if(A[i] == maj1)
            count1++;
        if(A[i] == maj2)
            count2++;
    }
    if(count1 > n/3) return maj1;
    if(count2 > n/3) return maj2;
    return -1;
}
