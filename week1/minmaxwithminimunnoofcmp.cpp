#include <bits/stdc++.h>

using namespace std;

// class Solution
// {
//    public:
//     int findSum(int A[], int N)
//     {
//     	int min=A[0],max=A[0];
//     	for(int i=0;i<N;i++)
//     	{
//     	    if(A[i] < min) min = A[i];
//     	    else if(A[i] > max) max = A[i];
//     	}
//     	return max+min;
//     }

// };

class Solution
{
   public:
    int findSum(int A[], int N)
    {
        int min,max,i;
    	if(N%2==0)
    	{
    	    if(A[0]>A[1])
    	    {
    	        max=A[0];min=A[1];
    	    }
    	    else
    	    {
    	        max=A[1];min=A[0];
    	    }
    	    i=2;
    	}
    	else
    	{
    	    min=A[0];max=A[0];
    	    i=1;
    	}
    	for(i;i<N;i+=2)
    	{
    	    if(A[i]>A[i+1])
    	    {
    	        if(A[i]>max)
    	        {
    	            max=A[i];
    	        }
    	        if(A[i+1] < min)
    	        {
    	            min = A[i+1];
    	        }
    	    }
    	    else
    	    {
    	        if(A[i+1] > max)
    	        {
    	            max = A[i+1];
    	        }
    	        if(A[i]<min)
    	        {
    	            min = A[i];
    	        }
    	    }
    	}
    	return min+max;
    }

};