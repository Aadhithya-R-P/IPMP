#include <bits/stdc++.h>

using namespace std;

int oddno(vector<int> &v, int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        res = res^v[i];
    }
    return res;
}