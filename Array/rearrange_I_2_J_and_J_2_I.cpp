/*
Given an array of size n where all elements are distinct and in range from 0 to n-1,
change contents of arr[] so that arr[i] = j is changed to arr[j] = i.
*/
#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
	int val = 0;
	int i = arr[0];
	while(i!=0)
	{
		int new_i = arr[i];
		arr[i]=val;
		val=i;
		i=new_i;
	}
	arr[0]=val;
}

int main() {
	// your code goes here
	int n=4;
	int arr[]={1,3,0,2};
	rearrange(arr, n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
	return 0;
}
