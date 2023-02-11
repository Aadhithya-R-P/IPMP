#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        vector<int> s;
        int xor_of_array = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            xor_of_array^=nums[i];
        }
        int rightmost_setbit_of_xor_of_array = xor_of_array & ~(xor_of_array-1);//bit magic
        int x=0,y=0;
        for(int i=0;i<nums.size();i++)
        {
            if(rightmost_setbit_of_xor_of_array & nums[i])
            {
                x=x^nums[i];
            }
            else
            {
                y=y^nums[i];
            }
        }
        if(x<y)
        {
            s.push_back(x);
            s.push_back(y);
        }
        else
        {
            s.push_back(y);
            s.push_back(x);
        }
        return s;
    }
};