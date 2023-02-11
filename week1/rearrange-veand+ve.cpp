#include <bits/stdc++.h>

using namespace std;

//if not done according to occurences...What to do if occurence matters?(Doubt)(can do subarray rotation, delete and insert...But more effecient solution??)
class Solution{
public:

	void rearrange(int arr[], int n) {
	    int i=-1,j=n;
	    while(i<j)
	    {
	        do
	        {
	            i++;
	        }while(arr[i] < 0);
	        do
	        {
	            j--;
	        }while(arr[j] > 0);
	        if(i<j)
	        {
	            swap(arr[i],arr[j]);
	        }
	    }
	    int pos = i,neg = 0;
	    while(pos < n && neg < pos && arr[neg]<0)
	    {
	        swap(arr[pos],arr[neg]);
	        pos++;
	        neg+=2;
	    }
	}
};