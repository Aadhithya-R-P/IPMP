#include <bits/stdc++.h>

using namespace std;

vector<int> repeatedNumber(const vector<int> &A) {
    vector<int> v;
    long long int Xor = A[0];
    int n = A.size();
    for(int i=1;i<n;i++)
    {
        Xor ^= A[i];
    }
    for(long long int i=1;i<=n;i++)
    {
        Xor ^= i;
    }
    long long int setbit = Xor & ~(Xor - 1);
    int x=0,y=0;
    for(int i=0;i<n;i++)
    {
        if(setbit & A[i])
        {
            x^=A[i];
        }
        else
        {
            y^=A[i];
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(setbit & i)
        {
            x^=i;
        }
        else{
            y^=i;
        }
    }
    int ca=0,cb=0;
    for(int i=0;i<n;i++)
    {
        if(A[i] == x)
        {
            ca++;
        }
        else cb++;
    }
    if(ca==2)
    {
        v.push_back(x);
        v.push_back(y);   
    }
    else
    {
        v.push_back(y);
        v.push_back(x);
    }
    return v;
}