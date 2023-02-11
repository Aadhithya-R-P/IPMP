#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        vector<long long int> s;
        long long int Xor = Arr[0];
        for(long long int i=1;i<N;i++)
        {
            Xor ^= Arr[i];
        }
        long long int setbit = Xor & ~(Xor - 1);
        long long int x=0,y=0;
        for(long long int i=0;i<N;i++)
        {
            if(setbit & Arr[i])
            {
                x^=Arr[i];
            }
            else
            {
                y^=Arr[i];
            }
        }
        if(y>x)
        {
            s.push_back(y);
            s.push_back(x);
        }
        else
        {
            s.push_back(x);
            s.push_back(y);
        }
        return s;
    }
};