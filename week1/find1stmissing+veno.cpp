#include <bits/stdc++.h>

using namespace std;

int firstMissingPositive(vector<int> &A) {
    int n = A.size();int i=0;
    for(i;i<n;i++)
    {
        if(A[i] >= 1 && A[i] <=n && A[A[i]-1] != A[i])
        {
            swap(A[A[i]-1],A[i]);
        }
    }
    for(int i = 0;i<n;i++)
    {
        if(A[i] != i+1)
        {
            return i+1;
        }
    }
    return n+1;
}