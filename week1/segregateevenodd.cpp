#include <bits/stdc++.h>

using namespace std;

class Solution{
public:	

	void segregateEvenOdd(int arr[], int n) {
	   // int lo=0,hi=n-1;
	   // while(lo<hi)
	   // {
	   //     do
	   //     {
	   //         lo++;
	   //     }while(arr[lo] % 2 == 0);
	   //     do
	   //     {
	   //         hi--;
	   //     }while(arr[hi] % 2 != 0);
	   //     if(lo<hi)
	   //     {
	   //         swap(arr[lo],arr[hi]);
	   //     }
	   // }
	   sort(arr,arr+n);
	   vector<int> v1,v2;
	   for(int i=0;i<n;i++)
	   {
	       if(arr[i] % 2 == 0)
	       {
	           v1.push_back(arr[i]);
	       }
	       else
	       {
	           v2.push_back(arr[i]);
	       }
	   }
	   for(int i=0;i<n;i++)
	   {
	       if(i<v1.size())
	       {
	           arr[i] = v1[i];
	       }
	       else
	       {
	           arr[i] = v2[i-v1.size()];
	       }
	   }
	}
};