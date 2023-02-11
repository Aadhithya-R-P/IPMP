#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int N) {
        // vector<int> v(N,0);
        // vector<int> s;
        // for(int i=0;i<N+2;i++)
        // {
        //     if(!v[arr[i]-1]){
        //         v[arr[i]-1]++;
        //     }
        //     else{
        //         s.push_back(arr[i]);
        //     }
        // }
        // return s;
        
        vector<int> s;
        int Xor = arr[0];
        for(int i=1;i<N+2;i++)
        {
            Xor ^= arr[i];
        }
        for(int i=1;i<N+1;i++)
        {
            Xor ^= i;
        }
        int rightmostsetbit = Xor & ~(Xor - 1);
        int x=0,y=0;
        for(int i=0;i<N+2;i++)
        {
            if(rightmostsetbit & arr[i])
            {
                x^=arr[i];
            }
            else
            {
                y^=arr[i];
            }
        }
        for(int i=1;i<N+1;i++)
        {
            if(i & rightmostsetbit)
            {
                x^=i;
            }
            else
            {
                y^=i;
            }
        }
        s.push_back(y);
        s.push_back(x);
        return s;
    }
};