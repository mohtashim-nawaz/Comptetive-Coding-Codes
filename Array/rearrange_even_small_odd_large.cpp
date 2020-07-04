/*
Rearrange array such that even index elements are smaller and odd index elements are greater
Given an array, rearrange the array such that :

If index i is even, arr[i] <= arr[i+1]
If index i is odd, arr[i] >= arr[i+1]
*/

#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
	int t = *a;
	*a=*b;
	*b=t;
}

void rearrange(int arr[], int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(i%2==0)
		{
			if(arr[i]>arr[i+1])
			{
				swap(&arr[i],&arr[i+1]);
			}
		}
		else
		{
			if(arr[i]<arr[i+1])
			{
				swap(&arr[i],&arr[i+1]);
			}
		}
	}
}

int main() {

	int n=4;
	int arr[]={2,3,4,5};
	rearrange(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
