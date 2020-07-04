/*
  Given two integer arrays of same size, “arr[]” and “index[]”,
  reorder elements in “arr[]” according to given index array. 
  It is not allowed to given array arr’s length.
*/

#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int index[], int n)
{
	int temp[n];
	for(int i=0;i<n;i++)
		temp[i]=arr[i];
	for(int i=0;i<n;i++)
	{
		arr[index[i]]=temp[i];
	}
}

int main() {
	int n=5;
	int arr[]={50, 40, 70, 60, 90};
	int index[]={3,  0,  4,  1,  2};
	rearrange(arr,index,n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
	return 0;
}
