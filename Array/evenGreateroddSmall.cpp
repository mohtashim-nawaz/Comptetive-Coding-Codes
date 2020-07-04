//Given an array A of n elements, sort the array according to the following relations :
//A[i] >= A[i-1]  , if i is even.
//A[i] <= A[i-1]  , if i is odd.

#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void rearrange(int arr[], int n)
{
	for(int i=1;i<n;i++)
	{
		if(i%2==0)
		{
			if(arr[i]>arr[i-1])
				swap(&arr[i-1], &arr[i]);
		}
		else
		{
			if(arr[i]<arr[i-1])
				swap(&arr[i-1], &arr[i]);
		}
	}
}

int main() {
	int n=5;
	int arr[] = {1,3,2,2,5};
	rearrange(arr,n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
	return 0;
}
