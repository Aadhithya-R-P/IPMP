#include <bits/stdc++.h>

using namespace std;

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        int sum=n*(n+1)/2;
        for(int i=0;i<n-1;i++)
        {
            sum-=array[i];
        }
        return sum;
    }
};